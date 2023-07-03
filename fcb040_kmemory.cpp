#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=500000;
ll n,k,d=1,ans=0,a[N+5]={};
deque <ll> dq1,dq2;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        while (dq1.size()>0 && a[dq1.back()]<=a[i]) dq1.pop_back();
        while (dq2.size()>0 && a[dq2.back()]>=a[i]) dq2.pop_back();
        dq1.push_back(i);
        dq2.push_back(i);
        while (d<i && a[dq1.front()]-a[dq2.front()]>k){
            while (dq1.front()<=d) dq1.pop_front();
            while (dq2.front()<=d) dq2.pop_front();
            d++;
        }
        ans+=i-d+1;
    }
    cout<<ans;
}
