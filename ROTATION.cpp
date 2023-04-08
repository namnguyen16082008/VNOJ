#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a,b,c,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<n;i++){
        cin>>a>>b>>c;
        ans+=c;
    }
    cout<<ans%2;
}
