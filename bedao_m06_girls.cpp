#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000005;
ll m,n,k,s=-2,a[N],x[N];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>m>>n>>k;
    a[0]=0;
    for (ll i=1;i<=m;i++) cin>>a[i];
    sort(a+1,a+m+1);
    for (ll i=1;i<=m;i++){
        x[i]=a[i];
        a[i]+=a[i-1];
    }
    for (ll i=1;i<=m-n+1;i++)
        if (x[i+n-1]-x[i]<=k)
            s=max(s,a[i+n-1]-a[i-1]);
    cout<<s;
}
