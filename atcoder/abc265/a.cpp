#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, n;
    cin >> x >> y >> n;
    
    int ans = 0;
    if ((double)y / 3.0 < (double)x) {
        ans += y * (n/3);
        n -= n/3 * 3;
    }

    ans += x * n;

    cout << ans << endl;
    return 0;
}
