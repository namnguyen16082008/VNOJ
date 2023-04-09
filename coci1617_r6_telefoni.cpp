#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,k,x,d,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for (ll i=1;i<=n;i++){
        cin>>x;
        if (x==1) d=0;
        else if (x==0) d++;
        if (d==k){
            d=0;
            ans++;
        }
    }
    cout<<ans;
}
