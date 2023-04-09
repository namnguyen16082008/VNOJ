#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll V=100005;
ll n,W,w,v,a[V];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>W;
    a[0]=0;
    for (ll i=1;i<=V;i++) a[i]=1e+18;
    for (ll i=1;i<=n;i++){
        cin>>w>>v;
        for (ll j=V;j>=v;j--)
            if (a[j-v]!=1e+18 || j==v) a[j]=min(a[j],a[j-v]+w);
    }
    for (ll i=V-1;i>=0;i--)
        if (a[i]<=W){
            cout<<i;
            return 0;
        }
}
