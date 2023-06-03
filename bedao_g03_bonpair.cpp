#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=10000005,inf=1e+18;
ll n,x,d=0,ans=0,a[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>x;
    a[0]=-inf;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        while (a[d+1]+a[i]<=x && d<i-1) d++;
        while (a[d]+a[i]>x) d--;
        ans+=d;
    }
    cout<<ans;
}
