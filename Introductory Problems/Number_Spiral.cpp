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
    ll x , y;
    cin >>  x >> y;
    if(x <= y){
        if(y % 2 == 1)cout << y * y - (x - 1) << "\n";
        else cout << (y - 1) * (y - 1) + x << "\n";
    }else{
        if(x % 2 == 1)cout << (x - 1) * (x - 1) + y << "\n";
        else cout << x * x - (y - 1) << "\n";
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