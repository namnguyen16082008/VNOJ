#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,a[N],ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    for (ll i=n;i>=(n+3)/2;i--) ans+=a[i]*2;
    if (n%2==1) ans+=a[(n+1)/2];
    cout<<ans;
}
