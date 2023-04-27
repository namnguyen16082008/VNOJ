#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll ans=0;
string s,t="";
unordered_map <string,ll> mp;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline (cin,s);
    for (ll i=0;i<s.size();i++)
        if (s[i]>='0' && s[i]<='9') t+=s[i];
        else if (t!=""){
            if (mp[t]==0) ans++;
            mp[t]=1;
            t="";
        }
    if (t!=""){
        if (mp[t]==0) ans++;
        mp[t]=1;
    }
    cout<<ans;
}
