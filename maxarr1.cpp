#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll t,n,a[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    a[0]=0,a[1]=1;
    for (ll i=2;i<=N-5;i++)
        (i%2==0) ? a[i]=a[i/2] : a[i]=a[i/2]+a[i/2+1];
    for (ll i=1;i<=N-5;i++) a[i]=max(a[i],a[i-1]);
    cin>>t;
    while (t--){
        cin>>n;
        cout<<a[n]<<endl;
    }
}
