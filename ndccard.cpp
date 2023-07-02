#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=10000;
ll n,m,s,ans=0,a[N+5];
ll Find(ll l, ll r, ll x){
    while (l<r){
        ll md=(l+r)/2;
        if (a[md+1]<=x) l=md+1;
        else r=md;
    }
    return l;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    for (ll i=1;i<n-1;i++){
        if (a[i]+a[i+1]+a[i+2]>m) break;
        for (ll j=i+1;j<n;j++){
            if (a[i]+a[j]+a[j+1]>m) break;
            if (a[i]+a[j]+a[n]<=m){
                ans=max(ans,a[i]+a[j]+a[n]);
                goto Next;
            }
            s=Find(j+1,n,m-a[i]-a[j]);
            ans=max(ans,a[i]+a[j]+a[s]);
            Next:;
            if (ans==m){
                cout<<ans;
                return 0;
            }
        }
    }
    cout<<ans;
}

