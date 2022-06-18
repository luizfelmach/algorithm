#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> sub;

void subsets(int k) {
	if (k == n+1) {
		for (auto s : sub) cout << s << " ";
		cout << endl;
		return;
	}
	sub.push_back(k);
	subsets(k+1);
	sub.pop_back();
	subsets(k+1);
}

int main() {
	cin >> n;
	subsets(1);
	return 0;
}
