#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,ans=0;
string n,m,k;
string Min(string a, string b){
    if (a.size()<b.size()) return a;
    else if (a.size()>b.size()) return b;
    return (a>b) ? b : a;
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
string tru(string a, string b){
    ll kt=1,nho=0;
    while (a.size()<b.size()) a='0'+a;
    while (a.size()>b.size()) b='0'+b;
    if (a<b){
        swap(a,b);
        kt=0;
    }
    for (ll i=a.size()-1;i>=0;i--){
        a[i]=char(int(a[i])-int(b[i])+48);
        a[i]=char(int(a[i])-nho);
        nho=0;
        while (a[i]<'0'){
            a[i]+=10;
            nho++;
        }
    }
    while (a[0]=='0' && a.size()>1) a.erase(0,1);
    return (kt==1) ? a : '-'+a;
}
string chia(string a, string b){
    string t="",c="0";
    for (ll j=0;j<a.size();j++){
        t+=a[j];
        for (ll i=9;i>=0;i--){
            if (nhan1(b,char(i+48)).size()<t.size() || (nhan1(b,char(i+48)).size()==t.size() && nhan1(b,char(i+48))<=t)){
                t=tru(t,nhan1(b,char(i+48)));
                c+=char(i+48);
                while (t[0]=='0') t.erase(0,1);
                break;
            }
        }
    }
    while (c[0]=='0' && c.size()>1) c.erase(0,1);
    return c;
}
void Solve(){
    cin>>n>>m;
    k=tru(Min(n,m),"1");
    string ans1=chia(nhan2(nhan2(k,cong(k,"1")),nhan2(k,cong(k,"1"))),"4");
    string ans2=nhan2(chia(nhan2(k,cong(k,"1")),"2"),nhan2(n,m));
    string ans3=nhan2(cong(n,m),chia(nhan2(k,nhan2(cong(k,"1"),cong(nhan1(k,'2'),"1"))),"6"));
    cout<<tru(cong(ans1,ans2),ans3)<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
