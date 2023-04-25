#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=500005;
ll n,a[N],ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1,greater<ll>());
    for (ll i=1;i<=n;i++)
        if (a[i]>ans) ans++;
        else break;
    cout<<ans;
}
