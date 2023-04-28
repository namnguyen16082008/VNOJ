#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=10000005;
ll t,n,a[N]={};
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
    SangNt();
    cin>>t;
    while (t--){
        cin>>n;
        (a[n]==1 || n<2) ? cout<<"NO"<<endl : cout<<"YES"<<endl;
    }
}
