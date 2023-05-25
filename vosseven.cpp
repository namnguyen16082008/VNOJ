#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll d=0,m=0;
unordered_map <ll,ll> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    s+='?';
    for (ll i=0;i<s.size();i++)
        if (s[i]=='7') d++;
        else{
            for (ll j=d;j>=1;j--) mp[j]+=d-j+1;
            m=max(m,d);
            d=0;
        }
    for (ll i=1;i<=m;i++) cout<<i<<" "<<mp[i]<<endl;
}
