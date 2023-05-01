#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll x[500]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=0;i<s.size();i++)
        x[int(s[i])]++;
    sort(x+1,x+300,greater<ll>());
    cout<<s.size()-x[1]-x[2];
}
