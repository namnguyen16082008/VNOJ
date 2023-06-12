#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005,inf=1e+18;
ll n,m,q,ans,l,r,a[N],b[N],x[N],ST[4*N];
void Find(ll i){
    ll l=0,r=m;
    while (l<r){
        ll md=(l+r)/2;
        if (b[md+1]<=a[i]) l=md+1;
        else r=md;
    }
    x[i]=min(abs(a[i]-b[l]),abs(a[i]-b[l+1]));
}
void Build(ll id, ll l, ll r){
    if (l==r){
        ST[id]=x[l];
        return;
    }
    ll md=(l+r)/2;
    Build(id*2,l,md);
    Build(id*2+1,md+1,r);
    ST[id]=min(ST[id*2],ST[id*2+1]);
}
ll Get_Min(ll id, ll l, ll r, ll x, ll y){
    if (l>y || r<x) return inf;
    if (l>=x && r<=y) return ST[id];
    ll md=(l+r)/2;
    return min(Get_Min(id*2,l,md,x,y),Get_Min(id*2+1,md+1,r,x,y));
}
void Solve(){
    cin>>l>>r;
    cout<<Get_Min(1,1,n,l,r)<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>q;
    for (ll i=1;i<=n;i++) cin>>a[i];
    for (ll i=1;i<=m;i++) cin>>b[i];
    b[0]=-inf;b[m+1]=inf;
    sort(b+1,b+m+1);
    for (ll i=1;i<=n;i++) Find(i);
    Build(1,1,n);
    while (q--) Solve();
}
