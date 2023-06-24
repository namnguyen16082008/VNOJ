#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=50;
ll n,a[N+5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1,greater<ll>());
    a[0]=0;
    for (ll i=1;i<=n;i++) a[i]+=a[i-1];
    cout<<a[(n+1)/2]*2-a[n];
}
