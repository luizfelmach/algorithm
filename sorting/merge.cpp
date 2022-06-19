#include <bits/stdc++.h>
using namespace std;

vector<int> values;

int s = 0;

// { 0 1 }

void merge(int s, int e) {
    int m = s + (e-s)/2;
    if ( e > s ) {
        merge(s, m);
        merge(m+1, e);

        // Implement merge here

    }
}

int main() {
    int n;
    cin >> n;
    int e = n - 1;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        values.push_back(a);
    }

    merge(s, 2);

    for (int v : values) {
        cout << v << " ";
    }
    cout << endl;
    return 0;
}
