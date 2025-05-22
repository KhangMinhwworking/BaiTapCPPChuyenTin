#include <bits/stdc++.h>
using namespace std;

long long DP(int n, int m, vector<int>& c) {
    vector<long long> dp(n + 1, 0);
    dp[0] = 1; 

    for(int i = 0; i < m; i++) {
        for(int j = c[i]; j <= n; j++) {
            dp[j] += dp[j - c[i]];
        }
    }
    return dp[n];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("COINCHANGE.INP", "r", stdin);
    freopen("COINCHANGE.OUT", "w", stdout);
    
    int n, m;
    cin >> n >> m;
    vector<int> c(m);
    for(int i = 0; i < m; i++) cin >> c[i];
    
    cout << DP(n, m, c);
    return 0;
}
