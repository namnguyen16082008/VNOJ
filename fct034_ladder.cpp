#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005,inf=1e+18;
ll n,q,a[N],x[N],y[N],a1,b1,ans;
pair <ll,ll> ST[4*N];
void Build(ll id, ll l, ll r){
    if (l==r){
        ST[id]={a[l],l};
        return;
    }
    ll md=(l+r)/2;
    Build(id*2,l,md);
    Build(id*2+1,md+1,r);
    ST[id]=max(ST[id*2],ST[id*2+1]);
}
pair <ll,ll> Get_Max(ll id, ll l, ll r, ll x, ll y){
    if (l>y || r<x) return {-inf,-inf};
    if (l>=x && r<=y) return ST[id];
    ll md=(l+r)/2;
    return max(Get_Max(id*2,l,md,x,y),Get_Max(id*2+1,md+1,r,x,y));
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>q;
    for (ll i=1;i<=n;i++) cin>>a[i];
    x[0]=0,y[n+1]=0;
    for (ll i=1;i<=n;i++)
        (a[i]>=a[i-1]) ? x[i]=x[i-1]+1 : x[i]=1;
    for (ll i=n;i>=1;i--)
        (a[i]>=a[i+1]) ? y[i]=y[i+1]+1 : y[i]=1;
    Build(1,1,n);
    while (q--){
        cin>>a1>>b1;
        ans=Get_Max(1,1,n,a1,b1).second;
        (x[ans]>=ans-a1+1 && y[ans]>=b1-ans+1) ? cout<<"Yes"<<endl : cout<<"No"<<endl;
    }
}
