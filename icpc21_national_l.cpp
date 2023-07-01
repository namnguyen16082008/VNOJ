#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll A=10000000;
ll n,a,ans=0,x[A+5]={},mp[A+5]={};
void Build(){
    for (ll i=2;i<=sqrt(A);i++)
        if (!x[i])
            for (ll j=1;j<=A/i;j++)
                x[i*j]=i;
    for (ll i=1;i<=A;i++)
        if (!x[i]) x[i]=i;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Build();
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        ll u,s=1;
        while (a>1){
            u=x[a];
            while (a%u==0) a/=u;
            s*=u;
        }
        ans+=mp[s];
        mp[s]++;
    }
    cout<<ans;
}
