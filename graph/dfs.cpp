#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

vector<int> adj[MAX];
bool visiteds[MAX];

void dfs(int n) {
    visiteds[n] = true;
    for (auto s : adj[n]) {
        if(!visiteds[s]) {
            dfs(s);
        }
    }
}

int main() {
    memset(visiteds, 0, sizeof visiteds);
    cout << "Size of edges: ";
    int n; cin >> n;
    cout << endl;
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cout << "When I start: ";
    int start; cin >> start;
    cout << endl;
    dfs(start);

    cout << "Verify if vertices is connected" << endl;
    int vert;
    while (cin >> vert) {
        if (visiteds[vert]) {
            cout << "Visited!" << endl;
        } else {
            cout << "Dont visited!" << endl;
        }
    }
    return 0;
}
