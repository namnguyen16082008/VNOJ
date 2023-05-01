#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000005;
ll t,n,a,mp[N];
void Solve(){
    cin>>n;
    ll ans=0;
    stack <ll> st;
    for (ll i=1;i<=n;i++){
        cin>>a;
        if (st.empty()){
            if (a==2) mp[i]=1;
            else mp[i]=0;
        }
        else{
            if (a==0){
                (mp[st.top()]==1 || mp[st.top()]==3) ? mp[i]=2 : mp[i]=0;
            }
            else if (a==2){
                (mp[st.top()]==2) ? mp[i]=3 : mp[i]=1;
            }
            else if (a==3){
                (mp[st.top()]==3) ? mp[i]=4 : mp[i]=0;
            }
        }
        st.push(i);
        if (mp[st.top()]==4){
            for (ll i=1;i<=4;i++)
                st.pop();
            ans++;
        }
    }
    if (ans==0) cout<<":("<<endl;
    else if (ans%2==1) cout<<"Bedao"<<endl;
    else cout<<"Bemai"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
