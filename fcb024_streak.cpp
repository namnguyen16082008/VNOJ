#include <bits/stdc++.h>
#define ll unsigned long long

using namespace std;

string s;
ll n,d1=0,d2=0,m1=0,m2=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while (n--){
        cin>>s;
        if (s=="Heads"){d1++;m2=max(m2,d2);d2=0;}
        else if (s=="Tails"){d2++;m1=max(m1,d1);d1=0;}
    }
    cout<<max(m1,d1)<<" "<<max(m2,d2);
}

