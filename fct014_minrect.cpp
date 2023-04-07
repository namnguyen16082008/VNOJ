#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll x1,y1,x2,y2;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>x1>>y1>>x2>>y2;
    cout<<abs(x1-x2)*abs(y1-y2);
}

