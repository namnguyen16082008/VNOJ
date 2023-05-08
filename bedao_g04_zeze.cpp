#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a,x2=0,x5=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        while (a%2==0){
            a/=2;
            x2++;
        }
        while (a%5==0){
            a/=5;
            x5++;
        }
    }
    cout<<min(x2,x5);
}
