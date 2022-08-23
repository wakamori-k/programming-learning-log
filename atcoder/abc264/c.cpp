#include <bits/stdc++.h>
using namespace std;

bool is_subarr(vector<int> a, vector<int> b) {
    int bi = 0;
    for (int ai = 0; ai < a.size(); ai++) {
        if (b[bi] == a[ai]) {
            bi++;
        }
    }
    
    return bi == b.size();
}
int main() {
    
    int h1, h2, w1, w2;
    cin >> h1 >> w1;
    vector<vector<int>> A(h1, vector<int>(w1, 0));
    vector<vector<int>> AT(w1, vector<int>(h1, 0));

    for (int i=0; i<h1; i++) {
        for (int j=0; j<w1; j++) {
            int v;
            cin >> v;
            A[i][j] = v; 
            AT[j][i] = v;
        }
    }

    cin >> h2 >> w2;
    vector<vector<int>> B(h2, vector<int>(w2, 0));
    vector<vector<int>> BT(w2, vector<int>(h2, 0));
    for (int i=0; i<h2; i++) {
        for (int j=0; j<w2; j++) {
            int v;
            cin >> v;
            B[i][j] = v; 
            BT[j][i] = v; 
        }
    }

    int bi = 0;
    for (int ai=0; ai < A.size(); ai++) {
        if (is_subarr(A[ai], B[bi])) {
            bi++;
        }
        if (bi >= B.size()) {
            break;
        }
    }
    if (bi != B.size()) {
        cout << "No" << endl;
        return 0;
    }

    int bti = 0;
    for (int ati=0; ati < AT.size(); ati++) {
        if (is_subarr(AT[ati], BT[bti])) {
            bti++;
        }
        if (bti >= BT.size()) {
            break;
        }        
    }    
    if (bti != BT.size()) {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;

    return 0;
}

/*
0  1  2  3  4
-------------
1  2  3  4  5
6  7  8  9  10
11 12 13 14 15
16 17 18 19 20

0  1  2
-------
6  8  9
16 18 19

0: 0
1: 2
2: 3

*/