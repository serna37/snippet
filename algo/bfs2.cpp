#include <bits/stdc++.h>
using namespace std;
int main() {
    int row = 4, column = 4;
    // vector<string> Grid(row);
    vector<vector<char>> Grid(row, vector<char>(column, '.'));
    Grid = {{'#', '.', '.', '.'},
            {'.', '#', '#', '.'},
            {'#', '.', '.', '.'},
            {'.', '.', '#', '.'}};
    vector<int> dx4 = {1, 0, -1, 0};
    vector<int> dy4 = {0, 1, 0, -1};
    vector<int> dx8 = {-1, -1, -1, 0, 0, 1, 1, 1};
    vector<int> dy8 = {-1, 0, 1, -1, 1, -1, 0, 1};
    queue<pair<int, int>> q;
    vector<vector<bool>> used(row, vector<bool>(column, false));
    // vector<vector<int>> dist(row, vector<int>(column, -1));

    q.push({0, 0});
    used[0][0] = true;
    // dist[0][0] = 0;

    int ans = 0;
    q.pop();
    for (int r = 0; r < row; r++) {
        for (int c = 0; c < column; c++) {
            if (used[r][c] or Grid[r][c] == '.') {
                continue;
            }
            q.push({r, c});
            used[r][c] = true;
            ans++;
            while (!q.empty()) {
                pair<int, int> current_xy = q.front();
                q.pop();
                // ans get
                for (int i = 0; i < 8; i++) {
                    int x = dx8[i] + current_xy.first;
                    int y = dy8[i] + current_xy.second;
                    // only in range
                    if (x < 0 or y < 0 or column <= x or row <= y) continue;
                    // un visited, can go
                    if (!used[x][y] and Grid[x][y] == '#') {
                        q.push({x, y});
                        used[x][y] = true;
                        // dist[x][y] =
                        // dist[current_xy.first][current_xy.second] + 1;
                    }
                }
            }
        }
    }

    cout << "BFS Grid chk" << endl;
    assert(ans == 2);
    cout << "OK" << endl;
}
