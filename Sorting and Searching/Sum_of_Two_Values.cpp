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
    ll n, x;
    cin >> n >> x;
    vi a(n);
    for(auto &x : a) cin >> x;
    map<ll, ll> mp;
    for(int i = 0; i < n; i++){
        if(mp.find(x - a[i]) != mp.end()){
            cout << mp[x - a[i]] << " " << (i + 1) << "\n";
            return;
        }
        mp[a[i]] = i + 1;
    }
    cout << "IMPOSSIBLE\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;         
    while (t--) solve();

    return 0;
}