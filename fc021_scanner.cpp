#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll R=50;
ll r,c,zr,zc;
char a[R+5][R+5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>r>>c>>zr>>zc;
    for (ll i=1;i<=r;i++)
        for (ll j=1;j<=c;j++)
            cin>>a[i][j];
    for (ll i=1;i<=r*zr;i++){
        for (ll j=1;j<=c*zc;j++)
            cout<<a[(i+zr-1)/zr][(j+zc-1)/zc];
        cout<<endl;
    }
}
