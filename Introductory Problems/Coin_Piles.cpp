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
    ll a, b;
    cin >> a >> b ;
    if(a == b){
        if(a > 2 || a == 0){
            yes;
        }else{
            no;
        }
    }else{
        if(a == 2LL * b || b == 2LL * a){
            yes;
        }else{
            no;
        }
    }
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;         
    while (t--) solve();

    return 0;
}