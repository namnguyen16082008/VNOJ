#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string t,a,b;
string Change(string a, string b){
    for (ll i=0;i<a.size();i++)
        if (abs(int(a[i])-int(b[i]))<13) a[i]=min(a[i],b[i]);
        else a[i]='a';
    return a;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t=="[CASE]"){
        cin>>a>>b;
        cout<<Change(a,b)<<endl;
        cin>>t;
    }
}
