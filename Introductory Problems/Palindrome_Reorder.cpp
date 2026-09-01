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
    vi freq(26, 0);
    for(char ch : s){
        freq[ch - 'A']++;
    }
    int cnt = 0;
    string p = "";
    for(int i = 0; i < 26; i++){
        if(freq[i] & 1) cnt++;
        else{
            p += string(freq[i]/2, (i+'A'));
        }
    }
    if(cnt > 1){
        cout << "NO SOLUTION\n";
        return;
    }

    string rev = p;
    reverse(all(rev));
    // cout << p << " " << rev << "\n";
    string allOdd = "";
    for(int i = 0; i < 26; i++){
        if(freq[i] & 1){
            allOdd = string(freq[i], (i + 'A'));
            break;
        }
    }
    cout << p + allOdd + rev << "\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;         
    while (t--) solve();

    return 0;
}