#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000005;
ll n,ans=0,a[N],x[N]={},y[N]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        x[i]=__gcd(x[i-1],a[i]);
    }
    for (ll i=n;i>=1;i--) y[i]=__gcd(y[i+1],a[i]);
    for (ll i=1;i<=n;i++)
        ans=max(ans,__gcd(x[i-1],y[i+1]));
    if (n==1) ans=1e+9;
    cout<<ans;
}
