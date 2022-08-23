#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<char>> g;
    for (int i=0; i<h; i++) {
        string s;
        cin >> s;
        g.push_back({});
        for (char c: s) {
            g.back().push_back(c);
        }
    }

    pair<int, int> p;
    unordered_set<string> seen = {};

    while (1) {
        int i = p.first;
        int j = p.second;

        string p_key = to_string(i) + "_" + to_string(j);

        if (seen.count(p_key)) {
            p.first = -1;
            break;
        }
        seen.insert(p_key);

        if (g[i][j] == 'U') {
            if (i == 0) {
                break;
            }
            p = {i-1, j};
        }
        if (g[i][j] == 'D') {
            if (i == h-1) {
                break;
            }
            p = {i+1, j};
        }
        if (g[i][j] == 'L') {
            if (j == 0) {
                break;
            }
            p = {i, j-1};
        }
        if (g[i][j] == 'R') {
            if (j == w-1) {
                break;
            }
            p = {i, j+1};
        }        
    }

    if (p.first < 0) {
        cout << -1 << endl;
    } else {
        cout << p.first + 1 << " " << p.second + 1 << endl;
    }
    return 0;
}
