#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,m,ans=0,x[101][101];
char a[101][101];
void Try(ll i, ll j){
    x[i][j]=1;
    if (a[i-1][j]=='*' && i>1 && x[i-1][j]==0) Try(i-1,j);
    if (a[i+1][j]=='*' && i<n && x[i+1][j]==0) Try(i+1,j);
    if (a[i][j-1]=='*' && j>1 && x[i][j-1]==0) Try(i,j-1);
    if (a[i][j+1]=='*' && j<m && x[i][j+1]==0) Try(i,j+1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++){
            cin>>a[i][j];
            x[i][j]=0;
        }
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++)
            if (a[i][j]=='*' && x[i][j]==0){
                ans++;
                Try(i,j);
            }
    cout<<ans;
}
