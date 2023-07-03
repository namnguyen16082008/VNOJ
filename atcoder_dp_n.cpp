#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=400,inf=1e+18;
ll n,m,a[N+5],b[N+5]={},x[N+5][N+5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        b[i]=b[i-1]+a[i];
    }
    for (ll i=1;i<=n;i++)
        for (ll j=i;j>=1;j--){
            if (i==j) x[i][j]=0;
            else if (i-j==1) x[i][j]=a[i]+a[j];
            else{
                m=inf;
                for (ll k=i;k>j;k--) m=min(m,x[i][k]+x[k-1][j]+b[i]-b[j-1]);
                x[i][j]=m;
            }
        }
    cout<<x[n][1];
}
