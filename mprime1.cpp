#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=11005;
ll n,d=0,a[N],x[N];
void SangNt(){
    for (ll i=1;i<=N;i++) a[i]=1;
    a[1]=0;
    ll i=1;
    while (i*i<=N){
        while (a[i]==0) i++;
        for (ll j=2;j<=N/i;j++)
            a[i*j]=0;
        i++;
    }
    for (ll i=1;i<=N;i++)
        if (a[i]==1){
            d++;
            x[d]=i;
        }
    x[0]=0;
    for (ll i=1;i<=d;i++) x[i]+=x[i-1];
}
void Solve(){
    unordered_map <ll,ll> mp;
    mp[0]=1;
    ll ans=0;
    for (ll i=1;i<=d;i++){
        ans+=mp[x[i]-n];
        mp[x[i]]++;
    }
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    SangNt();
    while (cin>>n){
        if (n==0) break;
        Solve();
    }
}
