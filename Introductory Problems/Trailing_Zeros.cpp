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

const int MAX_N = 1e9;

void solve() {
    // your code here
    ll n;
    cin >> n;
    int cnt = 0, q = 5;
    while(q <= n){
        cnt += n / q;
        q *= 5;
    }
    cout << cnt << "\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;         
    while (t--) solve();

    return 0;
}