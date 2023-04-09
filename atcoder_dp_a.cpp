#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,a[N],x[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        ll d=i-2,m=1e+18;
        if (d<1) d=1;
        for (ll j=d;j<i;j++)
            m=min(m,x[j]+abs(a[i]-a[j]));
        if (m==1e+18) m=0;
        x[i]=m;
    }
    cout<<x[n];
}
