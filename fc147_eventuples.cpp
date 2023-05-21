#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,q,a[N],x,y,c,l;
struct Node{
    ll Chan,Le;
};
Node ST[N];
void Build(ll id, ll l, ll r){
    if (l==r){
        if (a[l]%2==0) ST[id].Chan++;
        else ST[id].Le++;
        return;
    }
    ll md=(l+r)/2;
    Build(id*2,l,md);
    Build(id*2+1,md+1,r);
    ST[id].Chan=ST[id*2].Chan+ST[id*2+1].Chan;
    ST[id].Le=ST[id*2].Le+ST[id*2+1].Le;
}
ll Get_Chan(ll id, ll l, ll r, ll x, ll y){
    if (l>y || r<x) return 0;
    if (l>=x && r<=y) return ST[id].Chan;
    ll md=(l+r)/2;
    return Get_Chan(id*2,l,md,x,y)+Get_Chan(id*2+1,md+1,r,x,y);
}
ll Get_Le(ll id, ll l, ll r, ll x, ll y){
    if (l>y || r<x) return 0;
    if (l>=x && r<=y) return ST[id].Le;
    ll md=(l+r)/2;
    return Get_Le(id*2,l,md,x,y)+Get_Le(id*2+1,md+1,r,x,y);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>q;
    for (ll i=1;i<=N;i++){
        ST[i].Chan=0;
        ST[i].Le=0;
    }
    for (ll i=1;i<=n;i++) cin>>a[i];
    Build(1,1,n);
    while (q--){
        cin>>x>>y;
        c=Get_Chan(1,1,n,x,y);
        l=Get_Le(1,1,n,x,y);
        cout<<c*(c-1)*(c-2)/6+l*(l-1)*c/2<<endl;
    }
}
