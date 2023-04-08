#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,k,ans=0;
void Try(ll n){
    if (n<=k || (n-k)%2!=0){
        ans++;
        return;
    }
    Try((n-k)/2);
    Try((n+k)/2);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    Try(n);
    cout<<ans;
}
