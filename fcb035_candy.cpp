#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,m;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    if (m<n*(n+1)/2) cout<<-1;
    else{
        m-=n*(n+1)/2;
        (m%n==0) ? cout<<1+m/n<<" "<<n+m/n : cout<<1+m/n<<" "<<n+m/n+1;
    }
}
