#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=200005,inf=1e+18;
ll n,k,a[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    a[n+1]=inf;
    for (ll i=(n+1)/2;i<=n;i++){
        if (k<(a[i+1]-a[i])*(i-(n+1)/2+1)){
            cout<<a[i]+k/(i-(n+1)/2+1);
            return 0;
        }
        k-=(a[i+1]-a[i])*(i-(n+1)/2+1);
    }
}
