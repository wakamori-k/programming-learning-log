#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    long t;
    vector<int> a = {0};
    unordered_map<int, int> bounus;

    cin >> n >> m >> t;
    for (int i=0; i<n-1; i++) {
        int aa;
        cin >> aa;
        a.push_back(aa);
    }

    for (int i=0; i<m; i++) {
        int x, y;
        cin >> x >> y;
        bounus[x] = y;
    }

    bool ans = true;
    for (int i = 1; i<=n; i++) {
        t += bounus[i];

        t -= a[i];
        if ( t <= 0) {
            ans = false;
            break;
        }
    }

    cout << (ans ? "Yes" : "No") <<endl;
    return 0;
}
