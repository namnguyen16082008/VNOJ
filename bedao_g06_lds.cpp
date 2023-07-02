#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000000;
ll n,a,o=1,ans=1,x[N+5]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        x[a]=max(x[a],o);
        ans=max(ans,x[a]);
        for (ll j=2;j<=n/a;j++) x[a*j]=max(x[a*j],x[a]+1);
    }
    cout<<ans;
}

