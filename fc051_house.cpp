#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005,inf=1e+18;
ll n,ans=-inf,x=-inf,a;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        x=max(x,a);
        ans=max(ans,x-a);
    }
    (ans<=0) ? cout<<"Lo nang roi!" : cout<<ans;
}
