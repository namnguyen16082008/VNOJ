#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=300005;
ll n,a,b,c=0,d=0,y=1,ans=1e+18;
pair <ll,ll> x[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>a>>b;
    for (ll i=1;i<=n;i++) cin>>x[i].first>>x[i].second;
    sort(x+1,x+n+1);
    for (ll i=1;i<=n;i++){
        (x[i].second==1) ? c++ : d++;
        while (1==1){
            if (x[y].second==1 && c>a){
                c--;
                y++;
            }
            else if (x[y].second==2 && d>b){
                d--;
                y++;
            }
            else break;
        }
        if (d>=b && c>=a) ans=min(ans,x[i].first-x[y].first);
    }
    if (ans==1e+18) ans=-1;
    cout<<ans;
}
