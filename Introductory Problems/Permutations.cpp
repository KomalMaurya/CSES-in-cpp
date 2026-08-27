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
    vi a;
    for(int i = n - 1; i >= 1; i -= 2){
        a.pb(i);
    }
    for(int i = n; i >= 1; i -= 2){
        a.pb(i);
    }
    for(int i = 0; i + 1 < n; i++){
        if(abs(a[i] - a[i + 1]) == 1){
            cout << "NO SOLUTION\n";
            return;
        }
    }
    for(int x : a) cout << x << " ";
    cout << "\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;         
    while (t--) solve();

    return 0;
}