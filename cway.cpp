#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
string ans="1",x="1";
string change(ll n){
    ostringstream d;
    d<<n;
    return d.str();
}
string cong(string a, string b){
    while (a.size()<b.size()) a='0'+a;
    while (a.size()>b.size()) b='0'+b;
    string c=a;
     ll nho=0;
     for (ll i=a.size()-1;i>=0;i--){
        ll kq=int(a[i])+int(b[i])-96+nho;
        nho=kq/10;
        c[i]=char(kq%10+48);
     }
     c=char(nho+48)+c;
     while (c[0]=='0' && c.size()>1) c.erase(0,1);
     return c;
}
string nhan1(string a, char b){
    string c=a;
     ll nho=0;
     for (ll i=a.size()-1;i>=0;i--){
        ll kq=(int(a[i])-48)*(int(b)-48)+nho;
        nho=kq/10;
        c[i]=char(kq%10+48);
     }
     c=char(nho+48)+c;
     while (c[0]=='0' && c.size()>1) c.erase(0,1);
     return c;
}
string nhan2(string a, string b){
    string c="0";
    for (ll i=0;i<b.size();i++)
        c=cong(c+'0',nhan1(a,b[i]));
     while (c[0]=='0' && c.size()>1) c.erase(0,1);
     return c;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=n-2;i>=1;i--){
        x=nhan2(x,change(i));
        ans=cong(ans,x);
    }
    cout<<ans;
}
