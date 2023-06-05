#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,L,l,r,a[N];
ll Check(ll x){
    ll s=0;
    for (ll i=1;i<=x;i++)
        if (a[i]<x){
            if (a[i]<x-1) return 0;
            s++;
        }
    return s<=L;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>L;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1,greater<ll>());
    l=0,r=n;
    while (l<r){
        ll md=(l+r)/2;
        if (Check(md+1)==1) l=md+1;
        else r=md;
    }
    cout<<l;
}
