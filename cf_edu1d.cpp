#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll MaxN=1001;
ll n,m,k,o1,o2,x[MaxN*MaxN]={},b[MaxN][MaxN],c[MaxN][MaxN],d=0;
char a[MaxN][MaxN];
void Try(ll i, ll j){
    b[i][j]=1;c[i][j]=d;
    if (a[i-1][j]=='*' && i>1) x[d]++;
    if (a[i+1][j]=='*' && i<n) x[d]++;
    if (a[i][j-1]=='*' && j>1) x[d]++;
    if (a[i][j+1]=='*' && j<m) x[d]++;
    if (a[i-1][j]=='.' && b[i-1][j]==0 && i>1) Try(i-1,j);
    if (a[i+1][j]=='.' && b[i+1][j]==0 && i<n) Try(i+1,j);
    if (a[i][j-1]=='.' && b[i][j-1]==0 && j>1) Try(i,j-1);
    if (a[i][j+1]=='.' && b[i][j+1]==0 && j<m) Try(i,j+1);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>k;
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++){
            cin>>a[i][j];
            b[i][j]=0;
        }
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++)
            if (b[i][j]==0 && a[i][j]=='.'){
                d++;
                Try(i,j);
            }
    for (ll i=1;i<=k;i++){
        cin>>o1>>o2;
        cout<<x[c[o1][o2]]<<endl;
    }
}
