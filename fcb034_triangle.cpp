#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,n,x,y,ans;
void Solve(){
    cin>>n;
    ans=0;
    for (ll i=1;i<=n;i++){
        cin>>x>>y;
        ans=max(ans,x+y);
    }
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
