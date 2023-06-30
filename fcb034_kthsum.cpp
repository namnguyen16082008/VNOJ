#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100000;
ll n,k,a[N+5],b;
priority_queue <pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    for (ll i=1;i<=n;i++){
        cin>>b;
        pq.emplace(b+a[1],1);
    }
    while (k--){
        auto [x,y]=pq.top();
        pq.pop();
        cout<<x<<" ";
        if (y<n) pq.emplace(x-a[y]+a[y+1],y+1);
    }
}
