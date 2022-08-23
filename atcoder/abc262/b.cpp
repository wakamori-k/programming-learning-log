#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    unordered_map<int, unordered_set<int>> graph;

    for (int i=0; i<m; i++) {
        int u, v;
        cin >> u >> v;

        graph[u].insert(v);
        graph[v].insert(u);
    }

    int count = 0;
    for (int i=0; i<(n-1); i++) {
        for (int j=i+1; j<n; j++) {
            for (int k=j+1; k<=n; k++) {
                if (graph[i].find(j) != graph[i].end() &&
                    graph[j].find(k) != graph[j].end() &&
                    graph[k].find(i) != graph[k].end()) {
                    count++;
                }
            }
        }
    }
    cout << count<< endl;


    // for (auto e: graph) {
    //     cout << e.first << ":";
    //     for (int v: e.second) {
    //         cout << " " << v;
    //     }
    //     cout << endl;
    // }
    return 0;
}