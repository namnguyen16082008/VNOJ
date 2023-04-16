#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,m,d=0;
char a[10000][10000];
void Eat(ll i, ll j){
    a[i][j]='.';
    ll a1=0,b1=0,c1=0,d1=0;
    if (a[i+1][j]=='#' && i<n) a1=1;
    if (a[i-1][j]=='#' && i>1) b1=1;
    if (a[i][j+1]=='#' && j<m) c1=1;
    if (a[i][j-1]=='#' && j>1) d1=1;
    if (a1==1) Eat(i+1,j);
    if (b1==1) Eat(i-1,j);
    if (c1==1) Eat(i,j+1);
    if (d1==1) Eat(i,j-1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++)
            cin>>a[i][j];
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++)
            if (a[i][j]=='#'){
                d++;
                Eat(i,j);
            }
    cout<<d;
}
