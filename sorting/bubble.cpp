#include <bits/stdc++.h>
using namespace std;

vector<int> values;

void bubble() {
    for (int i = 0; i < values.size(); i++) {
        for (int j = 0; j < values.size() - 1; j++) {
            if (values[j] > values[j + 1]) swap(values[j], values[j + 1]);
        }
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        values.push_back(a);
    }

    bubble();

    for (int v : values) {
        cout << v << " ";
    }
    cout << endl;
    return 0;
}
