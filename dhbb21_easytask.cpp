#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll z=1000001;
ll n,x[z],a[z],m=1e+18,d=-1e+18;
void SangNt(){
    for (ll i=1;i<=z;i++) a[i]=1;
    a[1]=0;
    ll i=2;
    while (i<=sqrt(z)){
        while (a[i]==0) i++;
        for (ll j=2;j<=z/i;j++)
            a[i*j]=0;
        i++;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    x[0]=0;
    SangNt();
    for (ll i=1;i<=n;i++){
        cin>>x[i];
        x[i]+=x[i-1];
        if (a[i]==1){
            m=min(m,x[i-1]);
            d=max(d,x[i]-m);
        }
    }
    cout<<d;
}
