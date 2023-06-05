#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll ans;
string a,b;
vector <ll> x,y;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    ans=0;
    for (ll i=0;i<a.size();i++)
        if (a[i]==a[0]) x.push_back(i);
    for (ll i=0;i<b.size();i++)
        if (b[i]==a[0]) y.push_back(i);
    if (x.size()!=y.size() || a.size()!=b.size()){
        cout<<-1;
        return 0;
    }
    for (ll i=0;i<x.size();i++) ans+=abs(x[i]-y[i]);
    cout<<ans;
}
