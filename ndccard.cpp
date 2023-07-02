#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=10000;
ll n,m,s,l,r,ans=0,a[N+5];
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
    l=1,r=n;
    while (l<r){
        while (a[l]+a[r]>=m) r--;
        s=Find(1,n,m-a[l]-a[r]);
        s-=s==r;
        s-=s==l;
        ans=max(ans,(a[l]+a[r]+a[s])*(s>0));
        l++;
    }
    cout<<ans;
}

