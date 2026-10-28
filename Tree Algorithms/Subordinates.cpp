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

void dfs(int node, int p, vi adj[], vi &subTree){
    for(auto child : adj[node]){
        if(child == p) continue;
        dfs(child, node, adj, subTree);
        subTree[node] += subTree[child] + 1;
    }
    // cout << subTree[node] << " ";
}

// SitaRam SitaRam
void solve() {
    // your code here
    int n;
    cin >> n;
    vi adj[n + 1];
    for(int i = 2; i <= n ; i++){
        int u;
        cin >> u;
        adj[u].pb(i);
        adj[i].pb(u);
    }
    vi subTree(n + 1, 0);
    dfs(1, 0, adj, subTree);
    for(int i = 1; i <= n; i++) cout << subTree[i] << " ";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;         
    while (t--) solve();

    return 0;
}