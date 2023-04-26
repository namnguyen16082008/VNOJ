#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll inf=1e+18;
ll n,a[20],b[20],x[20],ans=inf;
void Build(){
    x[1]=2,x[2]=3,x[3]=5,x[4]=7,x[5]=11,x[6]=13,x[7]=17,x[8]=19,x[9]=23;
}
void Check(ll d){
    for (ll i=1;i<=d;i++) b[i]=a[i];
    sort(b+1,b+d+1,greater<ll>());
    ll s=1;
    for (ll i=1;i<=d;i++)
        for (ll j=1;j<b[i];j++)
            if (s>inf/x[i]) return;
            else s*=x[i];
    ans=min(ans,s);
}
void Try(ll n, ll d, ll k){
    for (ll i=2;i<=n;i++)
        if (n%i==0){
            a[d]=i;
            n/=i;
            if (n==1) Check(d);
            else Try(n,d+1,i);
            n*=i;
        }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Build();
    cin>>n;
    if (n==1) cout<<1;
    else{
        Try(n,1,2);
        cout<<ans;
    }
}
