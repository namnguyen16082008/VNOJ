#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,n,ans[2000005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--){
        cin>>n;
        ans[n*2]=0;
        for (ll i=n*2-1;i>=1;i--)
            if (i>n){
                ans[i]=n*2-i+ans[i+1]/10;
                ans[i+1]%=10;
            }
            else if (i<=n){
                ans[i]=i+ans[i+1]/10;
                ans[i+1]%=10;
            }
        for (ll i=1;i<n*2;i++) cout<<ans[i];
        cout<<endl;
    }
}
