#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

vector<int> adj[MAX];
bool visiteds[MAX];
int dist[MAX];

void bfs(int n) {
    queue<int> q;
    visiteds[n] = true;
    dist[n] = 0;
    q.push(n);
    while (!q.empty()) {
        int f = q.front();
        q.pop();
        for (auto s : adj[f]) {
            if (!visiteds[s]) {
                dist[s] = dist[f] + 1;
                q.push(s);
                visiteds[s] = true;
            }
        }
    }
}

int main() {
    memset(visiteds, 0, sizeof visiteds);
    memset(dist, -1, sizeof dist);
    cout << "Size of edges: ";
    int n;
    cin >> n;
    cout << endl;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cout << "When I start: ";
    int start;
    cin >> start;
    cout << endl;
    bfs(start);
    cout << "Verify distance" << endl;
    int vert;
    while (cin >> vert) {
        if (dist[vert] != -1) {
            cout << "Distance: " << dist[vert] << endl;
        } else {
            cout << "Not visited!" << endl;
        }
    }
    return 0;
}
