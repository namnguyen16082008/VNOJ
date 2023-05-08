#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,n;
void Solve(){
    cin>>n;
    for (ll i=2;i<=1e+6;i++)
        if (n%i==0){
            if (n%(i*i)==0) cout<<i<<" "<<n/i/i<<endl;
            else cout<<sqrt(n/i)<<" "<<i<<endl;
            return;
        }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}

