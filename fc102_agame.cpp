#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll inf=1e+18;
ll t,n,x;
void Solve(){
    cin>>n;
    ll ans=0,m=-inf;
    for (ll i=1;i<=n;i++){
        cin>>x;
        m=max(m,x);
        ans=__gcd(ans,x);
    }
    ((m/ans-n)%2==1) ? cout<<"DD"<<endl : cout<<"M"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
