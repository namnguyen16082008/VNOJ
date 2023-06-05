#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=200005;
ll n,a[N],h[N],ST[4*N]={},ans=0;
void Update(ll id, ll l, ll r, ll x, ll y){
    if (l>x || r<x) return;
    if (l==r){
        ST[id]=y;
        return;
    }
    ll md=(l+r)/2;
    Update(id*2,l,md,x,y);
    Update(id*2+1,md+1,r,x,y);
    ST[id]=max(ST[id*2],ST[id*2+1]);
}
ll Find_Max(ll id, ll l, ll r, ll x, ll y){
    if (l>y || r<x) return 0;
    if (l>=x && r<=y) return ST[id];
    ll md=(l+r)/2;
    return max(Find_Max(id*2,l,md,x,y),Find_Max(id*2+1,md+1,r,x,y));
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>h[i];
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        if (i>1) a[i]+=Find_Max(1,1,n,1,h[i]);
        Update(1,1,n,h[i],a[i]);
        ans=max(ans,a[i]);
    }
    cout<<ans;
}
