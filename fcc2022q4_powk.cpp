#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while (n--){
        cin>>a;
        if (a%2==1) cout<<(a+1)/2<<" "<<(a-1)/2<<endl;
        else if (a%4==0) cout<<a/4+1<<" "<<a/4-1<<endl;
        else cout<<"impossible"<<endl;
    }
}
