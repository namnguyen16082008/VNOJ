#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,x;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    x=sqrt(n);
    while (x*(x-1)<n) x++;
    cout<<n+x-1;
}
