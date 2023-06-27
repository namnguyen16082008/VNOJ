#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=10005,inf=1e+18;
ll n,d,a[N],m=inf,s=0,x=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>d;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        s+=a[i];
        m=min(m,a[i]);
        if (i>1) x=__gcd(x,abs(a[i]-a[i-1]));
    }
    (x%d!=0) ? cout<<-1 : cout<<(s-m*n)/d;
}
