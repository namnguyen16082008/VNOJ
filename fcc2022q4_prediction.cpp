#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,n,x;
void Solve(){
    cin>>n>>x;
    ll s=0,d=0,k=sqrt(n);
    for (ll i=1;i<=sqrt(n);i++)
        if (n%i==0) s+=2;
    if (k*k==n) s--;
    if (x>s){
        cout<<-1<<endl;
        return;
    }
    for (ll i=1;i<=sqrt(n);i++)
        if (n%i==0){
            d++;
            if (d==x){
                cout<<i<<endl;
                return;
            }
            else if (s-d+1==x){
                cout<<n/i<<endl;
                return;
            }
        }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
