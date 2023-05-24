#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
vector <ll> v;
ll Pr(ll n){
    if (n<=3) return n>1;
    if (n%2==0 || n%3==0) return 0;
    ll i=5;
    while (i*i<=n){
        if (n%i==0 || n%(i+2)==0) return 0;
        i+=6;
    }
    return 1;
}
ll Change(ll a, ll b){
    ostringstream d;
    d<<b;
    string s=d.str();
    for (ll i=0;i<s.size();i++)
        a=a*10+int(s[i])-48;
    return a;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (ll i=1;i<=182549;i++)
        if (Pr(i)==1) v.push_back(i);
    cin>>n;
    for (ll i=0;i<v.size();i+=2){
        if (Pr(Change(v[i],v[i+1]))==1) n--;
        if (n==0){
            cout<<Change(v[i],v[i+1]);
            return 0;
        }
    }
}
