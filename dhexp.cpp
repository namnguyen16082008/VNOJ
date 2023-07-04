#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100000;
ll n,k,ans=0,a[N+5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+2,a+n+1,greater<ll>());
    for (ll i=2;i<=n;i++)
        ans+=a[i]*(i<=k+1)-a[i]*(i>k+1);
    cout<<ans+a[1];
}
