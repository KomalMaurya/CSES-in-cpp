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
    ll n;
    cin >> n;
    ll cnt = 0;
    for(int i = 60; i >= 0; --i){
        ll len = (1LL << (i + 1));
        ll pos = n % len;
        cnt += (n / len) * (1LL << i);
        cnt += max(0LL, (pos + 1) - (len / 2));
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