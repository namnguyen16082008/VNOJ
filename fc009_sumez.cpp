#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,m,x,y,a[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    a[0]=0;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        a[i]+=a[i-1];
    }
    while (m--){
        cin>>x>>y;
        cout<<a[y]-a[x-1]<<endl;
    }
}
