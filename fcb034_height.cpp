#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll t,n,a[N];
void Solve(){
    cin>>n;
    stack <ll> st1,st2;
    unordered_map <ll,ll> mp1,mp2;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        if (!st1.empty()){
            while (a[st1.top()]<a[i]){
                st1.pop();
                if (st1.empty()) break;
            }
        }
        if (st1.empty()) mp1[i]=0;
        else{
            if (a[i]==a[st1.top()]) mp1[i]=mp1[st1.top()]+1;
            else mp1[i]=0;
        }
        st1.push(i);
    }
    for (ll i=n;i>=1;i--){
        if (!st2.empty()){
            while (a[st2.top()]<a[i]){
                st2.pop();
                if (st2.empty()) break;
            }
        }
        if (st2.empty()) mp2[i]=0;
        else{
            if (a[i]==a[st2.top()]) mp2[i]=mp2[st2.top()]+1;
            else mp2[i]=0;
        }
        st2.push(i);
    }
    for (ll i=1;i<=n;i++) cout<<mp1[i]+mp2[i]<<" ";
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
