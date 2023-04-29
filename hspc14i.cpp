#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while (cin>>a>>b>>c) cout<<max(b-a,c-b)-1<<endl;
}
