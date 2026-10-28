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
    int n;
    cin >> n;
    vi a(n);
    for(auto &x : a) cin >> x;
    ll sum = 0, res = 0;
    vi pref(n);
    ll mx = a[0];
    pref[0] = a[0];
    for(int i = 1; i < n; i++){
        mx = max(mx ^ a[i], pref[i - 1] ^ a[i]);
        pref[i] = max(mx, pref[i]);
    }
    cout << *max_element(all(pref)) << "\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;         
    while (t--) solve();

    return 0;
}