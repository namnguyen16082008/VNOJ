#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1005;
ll n,a[N],d=1,x=0,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    for (ll i=2;i<=n;i++)
        if (a[i]==a[i-1]) d++;
        else{
            if (d>=4) ans+=(x+1);
            else if (d>=2) ans+=x;
            if (d>=2) x++;
            d=1;
        }
    if (d>=4) ans+=(x+1);
    else if (d>=2) ans+=x;
    cout<<ans;
}
