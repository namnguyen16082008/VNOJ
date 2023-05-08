#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1005;
ll n,k,x,i,a[N];
void Solve(){
    x=0;i=2;
    for (ll j=1;j<=n;j++) a[j]=1;
    while (i<=n){
        while (a[i]==0) i++;
        for (ll j=i;j<=n;j+=i)
            if (a[j]==1){
                x++;
                if (x==k){
                    cout<<j<<endl;
                    return;
                }
                a[j]=0;
            }
        i++;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while (cin>>n>>k) Solve();
}
