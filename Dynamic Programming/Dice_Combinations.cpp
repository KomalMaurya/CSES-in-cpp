#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()
#define fi first
#define se second
#define yes cout << "YES\n"
#define no  cout << "NO\n"
 
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
 
const int MOD=1e9+7;
 
int dfs(int n, vi &dp){
    if(n==0){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int cnt=0;
    for(int i=1;i<=6;i++){
        if(n-i>=0)cnt = (cnt+dfs(n-i,dp))%MOD;
    }
    dp[n]=cnt;
    return dp[n];
}
 
void solve() {
    // your code here
    int n;
    cin >> n;
    vi dp(n+1,-1);
    dfs(n,dp);
    cout << dp[n]<<"\n";
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t = 1;
    // cin >> t;         
    while (t--) solve();
 
    return 0;
}