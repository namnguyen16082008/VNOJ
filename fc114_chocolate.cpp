#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    cout<<((a/__gcd(a,b))%2==1 && (b/__gcd(a,b))%2==1)*__gcd(a,b);
}
