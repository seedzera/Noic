#include<bits/stdc++.h>

using namespace std;

const int N = 10010;
const int K = 1010;
int dp[N][K];
int pref[N][K];
int v[N];

int main(){
    freopen("teamwork.in", "r", stdin); 
    freopen("teamwork.out", "w", stdout);
    int n, k;
    cin >> n >> k;
    dp[0][0] = 0;
    for(int i = 1;i <= k;i++){
        dp[0][i] = -1e9;
    }
    for(int i = 1;i <= n;i++){
        cin >> v[i];
    }
    for(int i = 1;i <= n;i++){
        int mx = 0;
        for(int j = 1;j <= k;j++){
            if(i-j+1 <= 0){
                break;
            }
            mx = max(mx, v[i-j+1]);
            dp[i][j] = mx*j + pref[i-j][k];
        }
        for(int j = 1;j <= k;j++){
            pref[i][j] = max(pref[i][j-1], dp[i][j]);
        }
    }
    cout << pref[n][k] << '\n';
}
