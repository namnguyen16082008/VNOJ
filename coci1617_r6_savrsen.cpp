#include <bits/stdc++.h>
#define ll long long int
#define MaxN 10000001

using namespace std;

ll a,b,x[MaxN]={},ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    for (ll i=1;i<=b;i++)
        for (ll j=2;j<=b/i;j++)
            x[i*j]+=i;
    for (ll i=a;i<=b;i++) ans+=abs(i-x[i]);
    cout<<ans;
}
