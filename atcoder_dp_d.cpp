#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll MaxW=100005;
ll n,W,w,v,a[MaxW]={},ans=-1e+18;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>W;
    for (ll i=1;i<=n;i++){
        cin>>w>>v;
        for (ll j=W;j>=w;j--)
            if (a[j-w]!=0 || j==w) a[j]=max(a[j],a[j-w]+v);
    }
    for (ll i=W;i>=0;i--)
        ans=max(ans,a[i]);
    cout<<ans;
}
