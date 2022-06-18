#include <bits/stdc++.h>
using namespace std;

vector<int> per = {0, 1, 2, 3, 4, 5};
int inf = 0;
int sup = per.size() -1;

void permuta(int inf, int sup) {
	if (inf == sup) {
		for (auto i : per) cout << i << " ";
		cout << endl;
		return;
	}
	for (int i = inf; i < sup; i++) {
		int temp = per[i];
		per[i] = per[inf];
		per[inf] = temp;
		permuta(inf + 1, sup);
		temp = per[i];
		per[i] = per[inf];
		per[inf] = temp;
	}

}


int main() {
	permuta(inf, sup);
	return 0;
}
