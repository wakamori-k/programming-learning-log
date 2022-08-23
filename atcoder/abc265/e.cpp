#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    int a, b, c, d, e, f;

    cin >> n >> m;
    cin >> a >> b >> c >> d >> e >> f;

    set<pair<long, long>> blocks = {};
    for (int i=0; i<m; i++) {
        int x, y;
        cin >> x >> y;
        blocks.insert({x, y});
    }

    map<pair<long long, long long>, long> dp;
    dp[{0, 0}] = 1;

    for (int i=0; i<n; i++) {
        map<pair<long long, long long>, long> new_dp;

        for (auto item: dp) {
            long long x = item.first.first;
            long long y = item.first.second;
            long val = item.second;

            if (blocks.count({x+a, y+b}) == 0) {
                new_dp[{x+a, y+b}] += val;
                new_dp[{x+a, y+b}] %= 998244353;
            }
            
            if (blocks.count({x+c, y+d}) == 0) {
                new_dp[{x+c, y+d}] += val;
                new_dp[{x+c, y+d}] %= 998244353;
            }
            if (blocks.count({x+e, y+f}) == 0) {
                new_dp[{x+e, y+f}] += val;
                new_dp[{x+e, y+f}] %= 998244353;
            }
        }

        swap(dp, new_dp);
    }

    long ans = 0;
    for (auto item: dp) {
        ans += item.second;
        ans %= 998244353;
    }
    cout << ans << endl;
    return 0;
}
