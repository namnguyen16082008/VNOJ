#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a,b,c,d;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>a>>b>>c>>d;
    ((a+b)%2==(c+d)%2) ? cout<<"yes" : cout<<"no";
}
