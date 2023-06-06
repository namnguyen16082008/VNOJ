#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,x;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if (n==1) x=0;
    else x=n;
    for (ll i=2;i<=sqrt(n);i++)
        if (n%i==0){
            while (n%i==0) n/=i;
            x=x/i*(i-1);
        }
    if (n>1) x=x/n*(n-1);
    cout<<x;
}
