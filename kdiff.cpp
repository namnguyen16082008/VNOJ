#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=300000;
ll n,k,ans=0,a[N+5]={},b[N+5]={},x[N+5],y[N+5];
void Build1(){
    ll d=1;
    deque <ll> dq1,dq2;
    for (ll i=1;i<=n;i++){
        while (!dq1.empty() && a[i]>=a[dq1.back()]) dq1.pop_back();
        while (!dq2.empty() && a[i]<=a[dq2.back()]) dq2.pop_back();
        dq1.push_back(i);
        dq2.push_back(i);
        while (a[dq1.front()]-a[dq2.front()]>k){
            while (dq1.front()<=d) dq1.pop_front();
            while (dq2.front()<=d) dq2.pop_front();
            d++;
        }
        x[i]=i-d+1;
    }
}
void Build2(){
    ll d=n;
    deque <ll> dq1,dq2;
    for (ll i=n;i>=1;i--){
        while (!dq1.empty() && a[i]>=a[dq1.back()]) dq1.pop_back();
        while (!dq2.empty() && a[i]<=a[dq2.back()]) dq2.pop_back();
        dq1.push_back(i);
        dq2.push_back(i);
        while (a[dq1.front()]-a[dq2.front()]>k){
            while (dq1.front()>=d) dq1.pop_front();
            while (dq2.front()>=d) dq2.pop_front();
            d--;
        }
        y[i]=d-i+1;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for (ll i=1;i<=n;i++) cin>>a[i];
    Build1();
    Build2();
    for (ll i=1;i<=n;i++) a[i]=max(a[i-1],x[i]);
    for (ll i=n;i>=1;i--) b[i]=max(b[i+1],y[i]);
    for (ll i=1;i<n;i++)
        ans=max(ans,a[i]+b[i+1]);
    cout<<ans;
}
