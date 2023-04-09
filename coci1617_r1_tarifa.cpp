#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll x,n,k;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>x>>n;
    x*=(n+1);
    for (ll i=1;i<=n;i++){
        cin>>k;
        x-=k;
    }
    cout<<x;
}
