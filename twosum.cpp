#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=5000;
ll n,ans=0,a[N+5]={};
ll Check(ll x, ll l, ll r){
    while (l<r){
        ll md=(l+r)/2;
        if (a[md]<x) l=md+1;
        else r=md;
    }
    return a[l]==x;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        a[i]+=a[i-1];
        for (ll j=1;j<i;j++)
            if (Check((a[i]+a[j-1])/2,j,i)==1 && a[i]%2==a[j-1]%2) ans=max(ans,i-j+1);
    }
    cout<<ans;
}
