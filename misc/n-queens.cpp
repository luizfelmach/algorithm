#include <bits/stdc++.h>
using namespace std;

int n = 6; // Board n x n
int solutions = 0;
int col[200];
int diag1[200];
int diag2[200];


int backtracking(int y) {
    if (y == n) {
        solutions++;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if (col[i] || diag1[i+y] || diag2[i-y+n-1]) continue;
        col[i] = diag1[i+y] = diag2[i-y+n-1] = 1;
        backtracking(y+1);
        col[i] = diag1[i+y] = diag2[i-y+n-1] = 0;
    }
    return solutions;
}

int main() {
    cin >> n;
    cout << backtracking(0) << endl;
}
