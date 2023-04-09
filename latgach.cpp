#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a;
string x[201];
string cong(string a, string b){
	while (a.size()<b.size()) a='0'+a;
	while (a.size()>b.size()) b='0'+b;
	string c=a;
	ll nho=0;
	for (ll i=a.size()-1;i>=0;i--){
		ll kq=int(a[i])+int(b[i])+nho-96;
		c[i]=char(kq%10+48);
		nho=kq/10;
	}
	c=char(nho+48)+c;
	while (c[0]=='0' && c.size()>1) c.erase(0,1);
	return c;
}
void Build(){
	x[1]="1";x[2]="2";
	for (ll i=3;i<=200;i++)
		x[i]=cong(x[i-1],x[i-2]);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Build();
	cin>>n;
	while (n--){
		cin>>a;
		cout<<x[a]<<endl;
	}
}
