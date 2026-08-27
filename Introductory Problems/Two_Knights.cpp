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
    ll max_n;
    cin >> max_n;
    for(ll n = 1; n <= max_n; n++){
        ll size = n * n;
        ll allWays = (size * (size - 1)) / 2;
        ll badWays = 0;
        badWays += 8 * (n - 4) * (n - 4);
        badWays += 6 * (n - 4) * 4;
        badWays += 4 * (n - 3) * 4;
        badWays += 3 * 8;
        badWays += 2 * 4;
        badWays /= 2;
        cout << allWays - badWays << "\n"; 
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