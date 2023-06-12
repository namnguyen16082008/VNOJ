#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,a[N]={},ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        if (a[i-1]%2){
            ans+=a[i]>0;
        }
        a[i]-=a[i-1]%2;
        ans+=a[i]/2;
    }
    cout<<ans;
}
