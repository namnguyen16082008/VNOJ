#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll M=3000;
ll n,m,a,ans=0,x[M+5]={},y[M+5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (ll i=1;i<=n;i++){
        cin>>a;
        x[a%m]++;
    }
    for (ll i=0;i<m;i++)
        for (ll j=0;j<m;j++)
            y[(i*j)%m]+=x[i]*x[j];
    for (ll i=0;i<m;i++)
        for (ll j=0;j<m;j++)
            if ((i*j)%m==0) ans+=x[i]*y[j];
    cout<<ans;
}
