#include <bits/stdc++.h>
using namespace std;

int n, m, e;
unordered_map<int, vector<pair<int, int>>> path;
unordered_map<int, vector<unordered_set<int>>> city_to_plant;

void make_map(
    int from,
    int current,
    unordered_set<int>> path_set,
    unordered_set<int> seen) {

    if (current > n) {
        city_to_plant[from].push_back(path_set);
        return;
    }
    if (seen.count(current) > 0) {
        return;
    }

    seen.insert(current);

    for (auto p: path[current]) {
        int path_i = p.first;
        int next = p.second;

        unordered_set<int> next_set = make_map(next, seen);
        next_set.insert(ei);
        
    }
}

int main() {
    
    cin >> n >> m >> e;
    
    for (int i=0; i<e; i++) {
        int u, v;
        cin >> u >> v;
        path[v].push_back({i+1, u});
        path[u].push_back({i+1, v});
    }

    

    int q;
    cin >> q;
    for (int i=0; i<q; i++) {
        int x;
        cin >> x;
    }

    return 0;
}
