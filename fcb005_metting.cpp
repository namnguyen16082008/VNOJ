#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
char k;
string s;
ll Check(string s){
    for (ll i=0;i<s.size();i++)
        if (s[i]==k) return 1;
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    while (n--){
        cin>>s;
        if (Check(s)==0) cout<<s<<endl;
    }
}
