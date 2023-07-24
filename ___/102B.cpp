#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll n=0,ans=0;
ll Tcs(ll n){
    ll x=0;
    while (n>0){
        x+=n%10;
        n/=10;
    }
    return x;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (auto z : s) n+=int(z)-48;
    while (n>9){
        ans++;
        n=Tcs(n);
    }
    cout<<ans+(s.size()>1);
}
