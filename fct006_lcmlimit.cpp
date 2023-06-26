#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,s=510510;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=s;i++)
        if (s%i==0){
            cout<<i<<" ";
            n--;
            if (!n) break;
        }
}

