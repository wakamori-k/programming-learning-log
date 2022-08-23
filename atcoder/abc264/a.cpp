#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, r;
    cin >> l >> r;
    string a = "atcoder";
    cout << a.substr(l-1, r-l+1) << endl;
    return 0;
}
