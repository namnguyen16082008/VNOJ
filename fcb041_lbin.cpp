#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll k,ans=0;
ll Cal(string s){
    ll n=0;
    for (ll i=0;i<s.size();i++)
        n=n*2+int(s[i])-48;
    return n;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>k>>s;
    while (Cal(s)>k){
        ll x=0;
        for (ll i=1;i<s.size();i++)
            if (s[i]=='1'){
                x=1;
                ans++;
                s.erase(i,1);
                break;
            }
        if (x==0)
            while (Cal(s)>k){
                s.erase(1,1);
                ans++;
            }
    }
    cout<<ans;
}
