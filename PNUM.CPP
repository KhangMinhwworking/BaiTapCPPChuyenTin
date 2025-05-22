#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(ll n) {
    if(n == 1) {
        cout << "True" << "\n";
        return;
    }
    while(n > 0) {
        ll x = n % 3;
        if(x != 2) n /= 3;
        else {
            cout << "False" << "\n";
            return;
        }
    }
    cout << "True" << "\n";
}

int main() {    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("PNUM.INP", "r", stdin);
    freopen("PNUM.OUT", "w", stdout);

    int T; cin >> T;
    while (T--) {
        ll n; cin >> n;
        solve(n);   
    }   
    return 0;
}