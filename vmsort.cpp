#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll t,n,ans=0;
unordered_map <string,ll> mp;
void Solve(){
    cin>>n;
    while (n--){
        cin>>s;
        ans+=(mp[s]==0);
        mp[s]=1;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
    cout<<ans;
}
