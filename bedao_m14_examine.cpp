#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll MOD=1e9+7;
ll t,n,ans;
void Solve(){
    cin>>n;
    ans=0;
    for (ll i=1;i<=sqrt(n);i++)
        if (n%i==0 && __gcd(i,n/i)==1) ans=(ans+i+n/i)%MOD;
    cout<<(ans*(n%MOD))%MOD<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
