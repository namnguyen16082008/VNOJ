#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,m,x,y,d,t[N],mp[N]={},cnt[N]={},cnt1[N]={},ans=0;
vector <ll> a[N];
void Topo(ll i){
    for (auto j : a[i])
        if (cnt[j]==0) Topo(j);
    cnt[i]=1;
    t[d]=i;
    d--;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    d=n;
    for (ll i=1;i<=m;i++){
        cin>>x>>y;
        a[x].push_back(y);
        mp[y]++;
    }
    for (ll i=1;i<=n;i++)
        if (mp[i]==0) Topo(i);
    for (ll i=1;i<=n;i++)
        for (auto j : a[t[i]])
            cnt1[j]=max(cnt1[j],cnt1[t[i]]+1);
    for (ll i=1;i<=n;i++) ans=max(ans,cnt1[i]);
    cout<<ans;
}
