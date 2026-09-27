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
    int n;
    cin >> n;
    vpi a;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        a.pb({x, 1});
        a.pb({y + 1, -1});
    }
    sort(all(a));
    int mx = a[0].se;
    for(int i = 1; i < 2 * n; i++){
        // cout << a[i].se << " ";
        a[i].se += a[i - 1].se;
        mx = max(mx, a[i].se);
    }
    cout << mx << "\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;         
    while (t--) solve();

    return 0;
}