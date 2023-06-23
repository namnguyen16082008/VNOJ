#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll ans=0;
ll Check(char a, char b){
    return ((int(a)-48)*10+int(b)-48)%4==0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=0;i<s.size();i++) ans+=(s[i]=='0' || s[i]=='4' || s[i]=='8');
    for (ll i=0;i<s.size()-1;i++)
        if (Check(s[i],s[i+1])) ans+=i+1;
    cout<<ans;
}
