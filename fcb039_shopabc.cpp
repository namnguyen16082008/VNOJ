#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=200000;
ll n,ans=0,x[3];
char k;
tuple <ll,ll,ll> a[N+5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    get<0>(a[0])=0;
    get<1>(a[0])=0;
    get<2>(a[0])=0;
    for (ll i=1;i<=n;i++){
        cin>>k;
        get<0>(a[i])=get<0>(a[i-1]);
        get<1>(a[i])=get<1>(a[i-1]);
        get<2>(a[i])=get<2>(a[i-1]);
        if (k=='a') get<0>(a[i])++;
        else if (k=='b') get<1>(a[i])++;
        else if (k=='c') get<2>(a[i])++;
        ll d=1;
        x[0]=get<0>(a[i]);
        x[1]=get<1>(a[i]);
        x[2]=get<2>(a[i]);
        while (max(x[0],max(x[1],x[2]))<(i-d+1)/2+1){
            d=i-max(x[0],max(x[1],x[2]))*2+2;
            x[0]=get<0>(a[i])-get<0>(a[d-1]);
            x[1]=get<1>(a[i])-get<1>(a[d-1]);
            x[2]=get<2>(a[i])-get<2>(a[d-1]);
        }
        ans=max(ans,i-d+1);
    }
    cout<<ans;
}
