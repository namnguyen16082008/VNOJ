#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,m;
string s;
unordered_map <string,ll> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>s;
        mp[s]=1;
    }
    cin>>m;
    while (m--){
        cin>>s;
        (mp[s]==1) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
}
