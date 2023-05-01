#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,x[50],ans=0;
ll Nt(ll n){
    if (n<2) return 0;
    for (ll i=2;i<=sqrt(n);i++)
        if (n%i==0) return 0;
    return 1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    x[0]=0;
    for (ll i=1;i<=31;i++)
        x[i]=(x[i-1]+1)*2-1;
    for (ll i=1;i<=31;i++)
        ans+=(x[i]>=a && x[i]<=b && Nt(x[i])==1);
    cout<<ans;
}
