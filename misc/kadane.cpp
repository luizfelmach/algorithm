#include <bits/stdc++.h>

using namespace std;
#define INF 0x3f3f3f3f

vector<int> values;

int main() {
    int qtd; cin >> qtd;
    for (int i = 0; i < qtd; i++) {
        int a; cin >> a;
        values.push_back(a);
    }

    int maxSum = -INF;
    int curSum = 0;

    for (auto v : values) {
        curSum += v;
        if (curSum > maxSum) {
            maxSum = curSum;
        }
        if (curSum < 0) curSum = 0;
    }

    cout << maxSum << endl;
    return 0;
}
