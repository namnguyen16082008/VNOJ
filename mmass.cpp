#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
unordered_map <char,ll> mp;
ll Solve(ll l, ll r){
    if (l>r) return 0;
    if (s[r]=='O' || s[r]=='C' || s[r]=='H') return mp[s[r]]+Solve(l,r-1);
    else if (s[r]>='2' && s[r]<='9'){
        if (s[r-1]=='O' || s[r-1]=='C' || s[r-1]=='H') return Solve(l,r-2)+mp[s[r-1]]*(int(s[r])-48);
        else{
            ll x=0;
            for (ll i=r-1;i>=l;i--){
                if (s[i]==')') x++;
                else if (s[i]=='(') x--;
                if (x==0) return Solve(l,i-1)+Solve(i,r-1)*(int(s[r])-48);
            }
        }
    }
    else{
        ll x=0;
        for (ll i=r;i>=l;i--){
            if (s[i]==')') x++;
            else if (s[i]=='(') x--;
            if (x==0) return Solve(l,i-1)+Solve(i+1,r-1);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    mp['O']=16;
    mp['C']=12;
    mp['H']=1;
    cout<<Solve(0,s.size()-1);
}
