#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000005;
ll n,x,a[N]={};
ll Nt(ll n){
    if (n<2) return 0;
    for (ll i=2;i<=sqrt(n);i++)
        if (n%i==0)
            return 0;
    return 1;
}
void SangNt(){
    a[1]=1;
    ll i=1;
    while (i<=sqrt(N)){
        while (a[i]==1) i++;
        for (ll j=2;j<=N/i;j++)
            a[i*j]=1;
        i++;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    x=(ll)sqrt(n);
    if (Nt(x)==1 && x*x==n){
        cout<<x<<" "<<2;
        return 0;
    }
    SangNt();
    for (ll i=2;i<=N-5;i++)
        if (a[i]==0 && n%i==0){
            for (ll j=2;j<=100;j++)
                if (pow(i,j)==n){
                    cout<<i<<" "<<j;
                    return 0;
                }
                else if (pow(i,j)>n) break;
        }
    cout<<0;
}
