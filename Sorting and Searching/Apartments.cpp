#include <bits/stdc++.h>
using namespace std;

#define int long long
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
    int n, m, k;
    cin >> n >> m >> k ;
    vi a(n), b(m);
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;

    sort(all(a));
    sort(all(b));

    int i = 0, j = 0, cnt = 0;
    while(i < n && j < m){
        if(abs(a[i] - b[j]) <= k){
            // cout << a[i] << " " << b[j] << "\n";
            cnt++;
            j++; i++;
        }else if(b[j] < a[i] - k) j++;
        else i++;
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
