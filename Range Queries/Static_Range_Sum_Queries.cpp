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
typedef vector<ll> vi;
typedef vector<pii> vpi;



void solve() {
    // your code here
    int n, q;
    cin >> n >> q;
    vi a(n);
    for(auto &x : a) cin >> x;
    vi pref(n + 1, 0);
    for(int i = 1; i <= n; i++){
        pref[i] = pref[i - 1] + a[i - 1];
    }
    while(q--){
        ll a, b;
        cin >> a >> b;
        cout << pref[b] - pref[a - 1] << "\n";
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