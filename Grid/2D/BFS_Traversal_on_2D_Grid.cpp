#include <bits/stdc++.h>
using namespace std;

int n, m;
char grid[1005][1005];
bool visited[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
    {
        return false;
    }
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;

    while (!q.empty())
    {
        // Queue theke ber kore ana
        pair<int, int> parent = q.front();
        q.pop();
        // Oi (Nodeo or ja ase) take niye kaj
        cout << parent.first << " " << parent.second << endl;
        // children push
        for (int i = 0; i < 4; i++)
        {
            int ci, cj;
            ci = parent.first + d[i].first;
            cj = parent.second + d[i].second;
            if (valid(ci, cj) && !visited[ci][cj])
            {
                q.push({ci, cj});
                visited[ci][cj] = true;
            }
        }
    }
}

int main()
{
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
    memset(visited, false, sizeof(visited));
    bfs(si, sj);
    return 0;
}