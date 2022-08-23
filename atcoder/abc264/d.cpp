#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    deque<tuple<string, int>> q = {{s, 0}};
    unordered_set<string> seen;
    while (!q.empty()) {
        string front_s = get<0>(q.front());
        int c = get<1>(q.front());
        if (front_s == "atcoder") {
            cout << c << endl;
            break;
        }
        q.pop_front();

        if (seen.count(front_s) > 0) {
            continue;
        }

        seen.insert(front_s);

        for (int i=0; i<front_s.size()-1; i++) {
            char temp = front_s[i];
            front_s[i] = front_s[i+1];
            front_s[i+1] = temp;
            q.push_back({front_s, c+1});
            temp = front_s[i];
            front_s[i] = front_s[i+1];
            front_s[i+1] = temp;            
        }
    }

    return 0;
}
