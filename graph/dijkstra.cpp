#include <bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define MAX 1000
#define pii pair<int, int>
#define f first
#define s second

vector<pair<int, int>> adj[MAX];
bool visiteds[MAX];
int dist[MAX];

void dijkstra(int n) {
    for (int i = 0; i < MAX; i++) {
        dist[i] = INF;
    }
    dist[n] = 0;
    priority_queue<pii> q;
    q.push(make_pair(0, n));

    while (!q.empty()) {
        int f = q.top().s;
        q.pop();
        if (visiteds[f]) continue;
        visiteds[f] = true;
        for (auto i : adj[f]) {
            int w =  i.s, b = i.f;
            if (dist[f] + w < dist[b]) {
                dist[b] = dist[f] + w;
                q.push(make_pair(0, b));
            }
        }
    }
}

int main() {
    memset(visiteds, 0, sizeof visiteds);
    cout << "Size of edges: ";
    int n;
    cin >> n;
    cout << endl;
    for (int i = 0; i < n; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        adj[a].push_back(make_pair(b, w));
        adj[b].push_back(make_pair(a, w));
    }
    cout << "When I start: ";
    int start;
    cin >> start;
    cout << endl;
    dijkstra(start);
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
