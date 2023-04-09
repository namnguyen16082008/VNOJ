#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100001;
ll n,a[4][N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    a[1][0]=0;
    a[2][0]=0;
    a[3][0]=0;
    for (ll i=1;i<=n;i++){
        cin>>a[1][i]>>a[2][i]>>a[3][i];
        a[1][i]+=max(a[2][i-1],a[3][i-1]);
        a[2][i]+=max(a[3][i-1],a[1][i-1]);
        a[3][i]+=max(a[1][i-1],a[2][i-1]);
    }
    cout<<max(a[1][n],max(a[2][n],a[3][n]));
}
