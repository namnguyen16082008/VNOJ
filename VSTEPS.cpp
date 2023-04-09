#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll MOD=14062008,N=100005;
ll  n,k,x,a[N]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for (ll i=1;i<=k;i++){
        cin>>x;
        a[x]=-1;
    }
    a[0]=0,a[1]=1;
    for (ll i=2;i<=n;i++)
        if (a[i]!=-1) a[i]=(a[i-1]+a[i-2])%MOD;
        else a[i]=0;
    cout<<a[n];
}
