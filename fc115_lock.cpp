#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,x=0;
string s;
unordered_map <char,ll> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>s;
    for (ll i=1;i<s.size();i++)
        if (s[i]==s[i-1]){
            cout<<0;
            return 0;
        }
    for (ll i=0;i<s.size();i++){
        x+=mp[s[i]]==0;
        mp[s[i]]++;
    }
    cout<<(x>=5);
}
