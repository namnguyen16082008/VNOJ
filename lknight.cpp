#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,k,o,x=0,y=0,a=0,b=0,c=0,d=0;
char o1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for (ll i=1;i<=k;i++){
        cin>>o1;
        o=int(o1)-48;
        if (o<=2){c+=o;d+=3-o;}
        else if (o<=4){c+=5-o;d+=2-o;}
        else if (o<=6){c+=4-o;d+=o-7;}
        else if (o<=8){c+=o-9;d+=o-6;}
        x=min(x,c);
        y=min(y,d);
        a=max(a,c);
        b=max(b,d);
    }
    cout<<(n-a+x)*(n-b+y);
}
