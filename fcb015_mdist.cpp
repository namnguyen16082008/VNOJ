#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=105,inf=1e+18;
ll n,x[N],y[N],ans=-inf;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>x[i]>>y[i];
    for (ll i=1;i<n;i++)
        for (ll j=i+1;j<=n;j++)
            ans=max(ans,abs(x[i]-x[j])+abs(y[i]-y[j]));
    cout<<ans;
}
