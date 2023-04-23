#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,n;
vector <ll> v;
unordered_map <ll,ll> mp;
void Build(){
    ll d=1;
    for (ll i=0;i<=30;i++)
        for (ll j=0;j<=19;j++)
            for (ll k=0;k<=13;k++){
                ll x=1;
                for (ll z=1;z<=i;z++){x*=2;if (x>1e+9) goto End;}
                for (ll z=1;z<=j;z++){x*=3;if (x>1e+9) goto End;}
                for (ll z=1;z<=k;z++){x*=5;if (x>1e+9) goto End;}
                v.push_back(x);
                End: ll o;
            }
    sort(v.begin(),v.end());
    for (auto x : v){
        d++;
        mp[x]=d;
    }
}
void Solve(){
    cin>>n;
    (mp[n]==0) ? cout<<"NO"<<endl : cout<<"YES "<<mp[n]-1<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Build();
    cin>>t;
    while (t--) Solve();
}
