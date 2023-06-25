#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100000,inf=1e+18;
ll n,x[N+5],y[N+5];
ll Cal(ll z[]){
    ll a[N+5],b[N+5],ans=inf;
    a[0]=0,b[n+1]=0;
    for (ll i=1;i<=n;i++) a[i]=a[i-1]+z[i];
    for (ll i=n;i>=1;i--) b[i]=b[i+1]+z[i];
    for (ll i=1;i<=n;i++) ans=min(ans,z[i]*i-a[i]+b[i]-z[i]*(n-i+1));
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>x[i]>>y[i];
    sort(x+1,x+n+1);
    sort(y+1,y+n+1);
    cout<<Cal(x)+Cal(y);
}
