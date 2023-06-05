#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005,MOD=1e9+7;;
ll n,a[3][N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=0;i<=2;i++) a[i][1]=1;
    for (ll i=2;i<=n;i++){
        a[0][i]=(a[0][i-1]+a[1][i-1]+a[2][i-1])%MOD;
        a[1][i]=(a[0][i-1]+a[2][i-1])%MOD;
        a[2][i]=(a[0][i-1]+a[1][i-1]+a[2][i-1])%MOD;
    }
    cout<<(a[0][n]+a[1][n]+a[2][n])%MOD;
}
