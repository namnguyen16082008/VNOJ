#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000005;
ll n,a[N],j[N],ans[N],x[N],d=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    for (ll i=1;i<=n;i++) cin>>j[i];
    for (ll i=n;i>=1;i--){
        while (d>0 && x[d]<=a[i]) d--;
        if (j[i]>d) ans[i]=-1;
        else ans[i]=x[d-j[i]+1];
        d++;
        x[d]=a[i];
    }
    for (ll i=1;i<=n;i++) cout<<ans[i]<<" ";
}
