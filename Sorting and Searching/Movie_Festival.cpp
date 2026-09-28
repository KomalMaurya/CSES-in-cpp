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
        int s, e;
        cin >> s >> e;
        a.pb({s, e});
    }
    int last = 0, cnt = 0;
    sort(all(a), [](auto &x, auto &y){
        return x.se < y.se;
    });

    for(auto [s, e] : a){
        if(s >= last){
            cnt++;
            last = e;
        }
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