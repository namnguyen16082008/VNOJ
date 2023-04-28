#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,n,a[50];
unordered_map <ll,ll> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    a[0]=0,a[1]=1;
    for (ll i=2;i<=45;i++) a[i]=a[i-1]+a[i-2];
    for (ll i=0;i<=45;i++)
        for (ll j=0;j<=45;j++)
            mp[a[i]*a[j]]=1;
    for (ll i=0;i<=45;i++) cout<<a[i]<<endl;
    while (t--){
        cin>>n;
        (mp[n]==1) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
}
