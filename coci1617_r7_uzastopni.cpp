#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=2;i<=sqrt(n*2);i++)
        if ((n-i*(i-1)/2)%i==0) cout<<(n-i*(i-1)/2)/i<<" "<<(n-i*(i-1)/2)/i+i-1<<endl;
}
