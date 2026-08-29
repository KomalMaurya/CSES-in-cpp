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



void solve() {
    // your code here
    int n, q;
    cin >> n >> q;
    vector<string> a(n);
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        a[i] = s;
    }
    vector<vector<int>> pref(n + 1, vector<int>(n + 1, 0));
    for(int i = 1 ; i <= n; i++){
        for(int j = 1; j <= n; j++){
            pref[i][j] = (a[i - 1][j - 1] == '*') + pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1];
        }
    }
    while(q--){
        int y1, x1, y2, x2;
        cin >> y1 >> x1 >> y2 >> x2;
        cout << pref[y2][x2] - pref[y1 - 1][x2] - pref[y2][x1 - 1] + pref[y1 - 1][x1 - 1] << "\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;         
    while (t--) solve();

    return 0;
}