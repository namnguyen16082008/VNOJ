#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,a[N],x[N],y[N],ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    a[0]=0;x[0]=1e+18;y[n+1]=1e+18;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        a[i]+=a[i-1];
    }
    for (ll i=1;i<=n;i++)
        x[i]=min(x[i-1],a[i]);
    for (ll i=n;i>=1;i--)
        y[i]=min(y[i+1],a[i]);
    for (ll i=1;i<=n;i++)
        if (a[i]<y[i+1] && x[i-1]+a[n]>a[i]) ans++;
    cout<<ans;
}
