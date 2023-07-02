#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,k,o,x=0,y=0,a=0,b=0,c=0,d=0,fi[8]={1,2,2,1,-1,-2,-2,-1},fj[8]={2,1,-1,-2,-2,-1,1,2};
char o1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for (ll i=1;i<=k;i++){
        cin>>o1;
        o=int(o1)-48;
        c+=fi[o-1];
        d+=fj[o-1];
        x=min(x,c);y=min(y,d);
        a=max(a,c);b=max(b,d);
    }
    cout<<(n-a+x)*(n-b+y);
}
