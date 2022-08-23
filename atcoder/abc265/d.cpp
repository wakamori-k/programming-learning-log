#include <bits/stdc++.h>
using namespace std;

unordered_map<long, long> make_range(vector<long> &a, long target) {
    unordered_map<long, long> ranges;
    long accum = 0;
    long l = 0;
    for (long r=0; r<a.size(); r++) {
        accum += a[r];

        if (accum == target) {
            ranges[l] = r;
        }

        while (l <= r && accum > target) {
            accum -= a[l];
            l++;
            if (accum == target) {
                ranges[l] = r;
            }            
        }
    }

    return ranges;
}

int main() {
    long n, p, q, r;
    cin >> n >> p >> q >> r;
    vector<long> a;
    for (long i=0; i<n; i++) {
        long aa;
        cin >> aa;
        a.push_back(aa);
    }

    unordered_map<long, long> p_ranges = make_range(a, p);
    unordered_map<long, long> q_ranges = make_range(a, q);
    unordered_map<long, long> r_ranges = make_range(a, r);
    
    // for (auto r: p_ranges) {
    //     cout << r.first << " " << r.second << endl;
    // }
    // cout << endl;;
    // for (auto r: q_ranges) {
    //     cout << r.first << " " << r.second << endl;
    // }
    // cout << endl;;
    // for (auto r: r_ranges) {
    //     cout << r.first << " " << r.second << endl;
    // }

    bool ans = false;
    for (auto p_range: p_ranges) {
        if (q_ranges.count(p_range.second + 1) <= 0) {
            continue;
        }
        auto q_range_to = q_ranges[p_range.second + 1];

        if (r_ranges.count(q_range_to + 1) <= 0) {
            continue;
        }

        ans = true;
        break;
    }

    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}
