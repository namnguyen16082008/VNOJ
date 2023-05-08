#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=10005;
ll n,a[N],b[N],f[N];
ll Check(ll l, ll r){
    ll l1=l,r1=r-1;
    while (1==1){
        while (b[l1]<b[r] || (b[l1]==b[r] && a[l1]<a[r])) l1++;
        while (b[r1]>b[r] || (b[r1]==b[r] && a[r1]>a[r])) r1--;
        if (l1>=r1) break;
        swap(a[l1],a[r1]);
        swap(b[l1],b[r1]);
    }
    swap(a[l1],a[r]);
    swap(b[l1],b[r]);
    return l1;
}
void Quick_Sort(ll l ,ll r){
    if (l<r){
        ll md=Check(l,r);
        Quick_Sort(l,md-1);
        Quick_Sort(md+1,r);
    }
}
ll Find(ll x, ll l, ll r){
    while (l<r){
        ll md=(l+r)/2;
        if (b[md+1]<=x) l=md+1;
        else r=md;
    }
    return l;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i]>>b[i];
    Quick_Sort(1,n);
    b[0]=-1,f[0]=0;
    for (ll i=1;i<=n;i++) f[i]=max(f[i-1],f[Find(a[i],0,i-1)]+b[i]-a[i]);
    cout<<f[n];
}
