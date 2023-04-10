#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,m,a[101][101];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++)
            cin>>a[i][j];
    for (ll j=m-1;j>=1;j--)
        for (ll i=1;i<=n;i++){
            if (i==1) a[i][j]+=max(a[i][j+1],a[i+1][j+1]);
            else if (i==n) a[i][j]+=max(a[i][j+1],a[i-1][j+1]);
            else a[i][j]+=max(a[i][j+1],max(a[i+1][j+1],a[i-1][j+1]));
        }
    ll ans=-1e+18;
    for (ll i=1;i<=n;i++) ans=max(ans,a[i][1]);
    cout<<ans;
}
