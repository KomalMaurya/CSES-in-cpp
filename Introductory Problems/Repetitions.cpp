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
    // int n;
    // cin >> n;
    string s;
    cin >> s;
    int mx = 1, cnt = 1;
    for(int i = 1; i < sz(s); i++){
        if(s[i] == s[i - 1])
            cnt++;
        else cnt = 1;
        mx = max(mx, cnt);
    }
    cout << mx << "\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;         
    while (t--) solve();

    return 0;
}