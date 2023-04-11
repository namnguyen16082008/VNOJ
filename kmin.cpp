#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=50005;
ll n,m,k,x,y,a[N],b[N];
priority_queue <pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>k;
    for (ll i=1;i<=n;i++) cin>>a[i];
    for (ll i=1;i<=m;i++) cin>>b[i];
    sort(a+1,a+n+1);
    for (ll i=1;i<=m;i++)
        pq.emplace(a[1]+b[i],1);
    while (k--){
        cout<<pq.top().first<<endl;
        x=pq.top().second+1;
        y=pq.top().first-a[x-1]+a[x];
        pq.pop();
        if (x<=n) pq.emplace(y,x);
    }
}
