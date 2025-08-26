#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool visited[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

void bfs(int si, int sj)
{
    cout << "Source:" << si << " " << sj << endl;
    visited[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci, cj;
        ci = si + d[i].first;
        cj = sj + d[i].second;
        cout << ci << " " << cj << endl;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    int si, sj;
    cin >> si >> sj;
    bfs(si, sj);
    return 0;
}