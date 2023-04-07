#include <bits/stdc++.h>
#define ll long long int
#define inf 1e+18

using namespace std;

string s;
ll n,x=0,y=0,ans=0,d=0,o[27]={},t=1;
void Try(ll j){
    ll q[27]={},k=0,z=0,o1,o2,m=-inf;
    for (ll i=0;i<s.size();i++){
        if (q[int(s[i])-96]==0) k++;
        q[int(s[i])-96]++;
        while (k>j){
            q[int(s[z])-96]--;
            if (q[int(s[z])-96]==0) k--;
            z++;
        }
        if (k==j){
            if (i-z+1>m){
                m=i-z+1;
                o1=i;
                o2=z;
            }
        }
    }
    if (j*ans<t*m){
        x=o1;
        y=o2;
        ans=m;
        t=j;
    }
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>s;
    for (ll i=0;i<s.size();i++)
        if (o[int(s[i])-96]==0){
            d++;
            o[int(s[i])-96]=1;
        }
    for (ll i=1;i<=d;i++)
        Try(i);
    cout<<y+1<<" "<<x+1;
}
