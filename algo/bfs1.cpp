#include <bits/stdc++.h>
using namespace std;
int main() {
    int N = 6;
    vector<vector<int>> Graph(N, vector<int>(1, 0));
    queue<int> q;
    vector<int> dist(N, -1);
    // vector<bool> used(N, false);
    // vector<int> counter(N + 1, 0);

    vector<int> ansa = {0, 0, 5, 1, 1};
    vector<int> ansb = {1, 4, 4, 2, 3};
    for (int i = 0; i < 5; i++) {
        int a, b;
        a = ansa[i];
        b = ansb[i];
        Graph[a].push_back(b);
        Graph[b].push_back(a);
    }

    q.push(0);
    dist[0] = 0;

    while (!q.empty()) {
        int current_vertex = q.front();
        q.pop();
        for (int next_vertex : Graph[current_vertex]) {
            if (dist[next_vertex] != -1) continue;
            dist[next_vertex] = dist[current_vertex] + 1;
            q.push(next_vertex);
        }
    }

    cout << "BFS tree 1 demension chk" << endl;
    for (int i = 0; i < 7; i++) {
        for (int v : Graph[i]) {
            cout << v;
        }
        cout << endl;
    }
    for (int i = 0; i < (int)dist.size(); i++) {
        cout << dist[i] << endl;
    }
    assert(dist[0] == 0);
    assert(dist[1] == 1);
    assert(dist[2] == 2);
    assert(dist[3] == 2);
    assert(dist[4] == 1);
    assert(dist[5] == 2);
    cout << "OK" << endl;
}
