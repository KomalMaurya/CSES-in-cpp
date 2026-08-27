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
    ll sum = (n * (n + 1)) / 2;
    if(sum % 2 == 1){
        no;
    }else{
        yes;
        vi a, b;
        ll sumA = 0, sumB = 0;
        for(int i = n; i >= 1; --i){
            if(sumA > sumB){
                sumB += i;
                b.pb(i);
            }else{
                a.pb(i);
                sumA += i;
            }
        }
        cout << sz(a) << "\n";
        for(int x : a) cout << x << " ";
        cout << "\n";
        cout << sz(b) << "\n";
        for(int x : b) cout << x << " ";
        cout << "\n";
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