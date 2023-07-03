#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=200000;
ll t,n,a[N+5],o=7;
bool comp(const pair <ll,ll> a, const pair <ll,ll> b){
    return a.second>b.second;
}
ll Check(ll x, ll y){
    ll ans=0,d=0;
    for (ll i=1;i<=n;i++)
        if ((i%2==1 && a[i]==y) || (i%2==0 && a[i]==x)) d++;
        else{
            ans+=d/2;
            d=0;
        }
    return ans+d/2;
}
void Solve(){
    cin>>n;
    ll ans=n;
    unordered_map <ll,ll> mp1,mp2;
    vector <pair<ll,ll>> x,y;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        if (i%2){
            if (!mp1[a[i]]) x.emplace_back(a[i],0);
            mp1[a[i]]++;
        }
        else{
            if (!mp2[a[i]]) y.emplace_back(a[i],0);
            mp2[a[i]]++;
        }
    }
    for (ll i=0;i<x.size();i++) x[i].second=mp1[x[i].first];
    for (ll i=0;i<y.size();i++) y[i].second=mp2[y[i].first];
    sort(x.begin(),x.end(),comp);
    sort(y.begin(),y.end(),comp);
    ll lx=x.size(),ly=y.size();
    for (ll i=0;i<min(lx,o);i++)
        for (ll j=0;j<min(ly,o);j++)
            if (x[i].first!=y[j].first) ans=min(ans,Check(x[i].first,y[j].first)+n-x[i].second-y[j].second);
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
