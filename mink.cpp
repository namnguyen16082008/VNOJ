#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=17005,inf=1e+18;
ll t,n,k,a[N],ST[4*N];
void Build(ll id, ll l, ll r){
    if (l==r){
        ST[id]=a[l];
        return;
    }
    ll md=(l+r)/2;
    Build(id*2,l,md);
    Build(id*2+1,md+1,r);
    ST[id]=min(ST[id*2],ST[id*2+1]);
}
ll Find_Min(ll id, ll l, ll r, ll x, ll y){
    if (l>y || r<x) return inf;
    if (l>=x && r<=y) return ST[id];
    ll md=(l+r)/2;
    return min(Find_Min(id*2,l,md,x,y),Find_Min(id*2+1,md+1,r,x,y));
}
void Solve(){
    cin>>n>>k;
    for (ll i=1;i<=n;i++) cin>>a[i];
    Build(1,1,n);
    for (ll i=1;i<=n-k+1;i++) cout<<Find_Min(1,1,n,i,i+k-1)<<" ";
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
