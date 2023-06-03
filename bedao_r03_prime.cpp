#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000005;
ll q,a,b,k,o[8][N],x[N]={};
void Build(){
    for (ll i=2;i<=N-5;i++)
        if (x[i]==0)
            for (ll j=1;j<=(N-5)/i;j++)
                x[i*j]++;
    for (ll i=1;i<=7;i++) o[i][0]=0;
    for (ll i=1;i<=N-5;i++){
        for (ll j=1;j<=7;j++)
            o[j][i]=o[j][i-1];
        o[x[i]][i]+=i!=1;
    }
}
void Solve(){
    cin>>a>>b>>k;
    cout<<o[k][b]-o[k][a-1]<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Build();
    cin>>q;
    while (q--) Solve();
}
