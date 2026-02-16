#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll h, m, s, geral;
    cin>>h>>m>>s;
    geral = (h*3600LL)+(m*60)+s;
    ll t;
    cin>>t;
    geral +=t;
    geral%=86400;
    h = geral/3600;
    m = (geral%3600)/60;
    s = geral%60;
    cout<<h<<'\n'<<m<<'\n'<<s<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while(t--){
        solve();
    }

    return 0;
}
