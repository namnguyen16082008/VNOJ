#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll A=3005;
string a,b,ans="";
ll x[A][A],s,a1,b1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    for (ll i=0;i<A;i++){
        x[i][0]=0;
        x[0][i]=0;
    }
    for (ll i=0;i<a.size();i++)
        for (ll j=0;j<b.size();j++)
            if (a[i]==b[j]) x[i+1][j+1]=x[i][j]+1;
            else x[i+1][j+1]=max(x[i+1][j],x[i][j+1]);
    a1=a.size(),b1=b.size();
    s=x[a1][b1];
    while (s>0){
        if (a[a1-1]==b[b1-1]){
            s--;
            a1--;
            b1--;
            ans=a[a1]+ans;
        }
        else if (x[a1-1][b1]>x[a1][b1-1]) a1--;
        else b1--;
    }
    cout<<ans;
}
