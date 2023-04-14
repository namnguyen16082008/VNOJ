#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string tong(string a, string b){
    while (a.size()<b.size()) a='0'+a;
    while (a.size()>b.size()) b='0'+b;
    string c=a;
    ll nho=0;
    for (ll i=a.size()-1;i>=0;i--){
        ll kq=int(a[i])+int(b[i])-96+nho;
        nho=kq/10;
        c[i]=char(kq%10+48);
    }
    return (nho==0) ? c : '1'+c;
}
string nhan1cs(string a, char b){
    string c=a;
    ll nho=0;
    for (ll i=a.size()-1;i>=0;i--){
        ll kq=(int(a[i])-48)*(int(b)-48)+nho;
        nho=kq/10;
        c[i]=char(kq%10+48);
    }
    return (nho==0) ? c : char(nho+48)+c;
}
string tich(string a, string b){
    string c="0";
    for (ll i=0;i<b.size();i++)
        c=tong(c+'0',nhan1cs(a,b[i]));
    while (c[0]=='0' && c.size()>1) c.erase(0,1);
    return c;
}
string hieu(string a, string b){
    ll kt=0;
    if (a.size()<b.size()){
        kt=1;
        swap(a,b);
    }
    else if (a.size()==b.size())
        if (a<b){
            swap(a,b);
            kt=1;
        }
    while (b.size()<a.size()) b='0'+b;
    ll nho=0;
    for (ll i=a.size()-1;i>=0;i--){
        if (a[i]<nho){
            a[i]+=10;
            nho++;
        }
        a[i]-=nho;
        nho=0;
        if (a[i]>=b[i])
            a[i]=char(int(a[i])-int(b[i])+48);
        else{
            a[i]=char(int(a[i])-int(b[i])+58);
            nho+=1;
        }
    }
    while (a[0]=='0' && a.size()>1) a.erase(0,1);
    if (kt==1) a='-'+a;
    return a;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a,b;
    cin>>a>>b;
    while (a[0]=='0' && a.size()>1) a.erase(0,1);
    while (b[0]=='0' && b.size()>1) b.erase(0,1);
    cout<< tong(a,b)<<endl<<hieu(a,b)<<endl<<tich(a,b);
}
