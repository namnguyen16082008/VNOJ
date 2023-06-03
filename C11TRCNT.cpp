#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=205,inf=1e+18;
ll n,x[N],y[N],a[N]={},m=inf,ans1=0,ans2=0;
ll Check(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3){
    return (x1-x2)*(y1-y3)==(x1-x3)*(y1-y2);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>x[i]>>y[i];
    for (ll i=1;i<n-1;i++)
        for (ll j=i+1;j<n;j++)
            for (ll k=j+1;k<=n;k++)
                if (Check(x[i],y[i],x[j],y[j],x[k],y[k])==0){
                    a[i]++;a[j]++;a[k]++;
                    ans1++;
                }
    for (ll i=n;i>=1;i--)
        if (a[i]<=m){
            m=a[i];
            ans2=i;
        }
    cout<<ans1<<" "<<ans2;
}
