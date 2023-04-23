#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,ans=0;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>s;
    for (ll i=0;i<s.size();i++){
        ll l=i,r=i,d=1;
        while (s[l-1]==s[r+1] && l>0 && r<s.size()-1){
            l--;
            r++;
            d+=2;
        }
        ans=max(ans,d);
    }
    for (ll i=1;i<s.size();i++)
        if (s[i]==s[i-1]){
            ll l=i-1,r=i,d=2;
            while (s[l-1]==s[r+1] && l>0 && r<s.size()-1){
                l--;
                r++;
                d+=2;
            }
            ans=max(ans,d);
        }
    cout<<ans;
}
