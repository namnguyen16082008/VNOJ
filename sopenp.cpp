#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1048576;
ll n,l,u,ans=0,a[N+5],x[N+5],y[N+5];
void Build1(){
    ll d=1,m=0;
    unordered_map <ll,ll> mp;
    for (ll i=1;i<=n;i++){
        m+=mp[a[i]]==0;
        mp[a[i]]++;
        while (m>l-1){
            mp[a[d]]--;
            m-=mp[a[d]]==0;
            d++;
        }
        x[i]=i-d+1;
    }
}
void Build2(){
    ll d=1,m=0;
    unordered_map <ll,ll> mp;
    for (ll i=1;i<=n;i++){
        m+=mp[a[i]]==0;
        mp[a[i]]++;
        while (m>u){
            mp[a[d]]--;
            m-=mp[a[d]]==0;
            d++;
        }
        y[i]=i-d+1;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>l>>u;
    for (ll i=1;i<=n;i++) cin>>a[i];
    Build1();
    Build2();
    for (ll i=1;i<=n;i++) ans+=y[i]-x[i];
    cout<<ans;
}
