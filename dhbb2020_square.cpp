#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=5000005;
ll n,ans=0,a[N]={},x[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (ll i=1;i<=N;i++) x[i]=i;
    for (ll i=2;i<=sqrt(N);i++)
        for (ll j=i*i;j<=N;j+=i*i)
            x[j]=j/(i*i);
    cin>>n;
    for (ll i=1;i<=n;i++){
        ans+=(a[x[i]]*(a[x[i]]-1)/2);
        a[x[i]]++;
    }
    cout<<ans;
}
