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
    set<ll> st;
    sort(all(a));
    for(int i = 0; i < n ; i++){
        ll sum = 0;
        for(int j = i ; j < n; j++){
            sum += a[j];
            st.insert(sum);
        }
    }
    ll i = 1;
    while(st.find(i) != st.end()){
        i++;
    }
    cout << i << "\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;         
    while (t--) solve();

    return 0;
}