#include <bits/stdc++.h>
#define ll long long int

using namespace std;

float h,m,x,y;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>h>>m;
    y=6*m;
    x=30*h+y/12;
    cout<<fixed<<setprecision(1)<<min(abs(x-y),360-abs(x-y));
}
