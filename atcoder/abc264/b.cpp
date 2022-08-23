#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    if (c > 8) {
        c -= (c-8) * 2;
    }
    if (r > 8) {
        r -= (r-8) * 2;
    }    

    if (c % 2 == 1) {
        if (c <= r && r <= 15-c+1) {
            cout << "black" << endl;
            return 0;
        }
    }
    if (r % 2 == 1) {
        if (r <= c && c <= 15-r+1) {
            cout << "black" << endl;
            return 0;
        }
    }    

    cout << "white" << endl;
    return 0;
}
