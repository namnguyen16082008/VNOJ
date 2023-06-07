#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll A=5000005,inf=1e+18;
ll n,a,d=0,e=-inf,ans=1e+18,mp[A]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        d=__gcd(d,a);
        e=max(e,a);
        mp[a]++;
    }
    for (ll i=1;i<=e;i++)
        for (ll j=2;j<=e/i;j++)
            mp[i]+=mp[j*i];
    for (ll i=d+1;i<=e;i++) ans=min(ans,n-mp[i]);
    if (ans==inf) ans=-1;
    cout<<ans;
}
