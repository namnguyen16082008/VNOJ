#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1005,MOD=1e9+7;
ll n,m,a[N][N];
char x[N][N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    a[1][1]=1;
    for (ll i=0;i<=n;i++) a[i][0]=0;
    for (ll i=0;i<=m;i++) a[0][i]=0;
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++){
            cin>>x[i][j];
            if (i!=1 || j!=1)
                (x[i][j]=='.') ? a[i][j]=(a[i-1][j]+a[i][j-1])%MOD : a[i][j]=0;
        }
    cout<<a[n][m];
}
