#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,a,b;
void Solve(){
    cin>>a>>b;
    if (a>b){
        cout<<"NO"<<endl;
        return;
    }
    if (a%2==b%2 || (a*2<=b && b%2==0)){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
