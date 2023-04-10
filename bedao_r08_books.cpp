#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,q,d,x,a[2*N];
unordered_map <ll,ll> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>q;
    for (ll i=1;i<=n;i++) a[i]=n-i+1;
    d=n;
    while (q--){
        cin>>x;
        d++;
        a[d]=x;
    }
    for (ll i=d;i>=1;i--)
        if (mp[a[i]]==0){
            cout<<a[i]<<endl;
            mp[a[i]]=1;
        }
}
