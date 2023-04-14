#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=25,S=5005;
ll s,n,a[N],x[S];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>s>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    for (ll i=0;i<=s;i++) x[i]=0;
    x[0]=1;
    for (ll i=1;i<=n;i++)
        for (ll j=s;j>=a[i];j--)
            if (x[j-a[i]]==1) x[j]=1;
    for (ll i=s;i>=0;i--)
        if (x[i]!=0){
            cout<<i;
            return 0;
        }
}
