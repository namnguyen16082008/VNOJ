#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000000,H=10000;
ll n,l,d,x=1,ans=0,a[N+5],mp[H+5]={};
priority_queue <ll> pq1;
priority_queue <ll,vector<ll>,greater<ll>> pq2;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>l>>d;
    l++;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        mp[a[i]]++;
        pq1.push(a[i]);
        pq2.push(a[i]);
        while (!mp[pq1.top()]) pq1.pop();
        while (!mp[pq2.top()]) pq2.pop();
        while (pq1.top()-pq2.top()>d){
            mp[a[x]]--;
            x++;
            while (!mp[pq1.top()]) pq1.pop();
            while (!mp[pq2.top()]) pq2.pop();
        }
        ans+=(i-x+1>=l)*(i-x-l+2);
    }
    cout<<ans;
}
