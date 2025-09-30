#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool visited[1005];
int level[1005];

void bfs(int srcnode)
{
    queue<int> q;
    q.push(srcnode);
    visited[srcnode] = true;
    level[srcnode] = 0;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for (int children : adj_list[parent])
        {
            if (!visited[children])
            {
                q.push(children);
                visited[children] = true;
                level[children] = level[parent] + 1;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));

    int src, des;
    cin >> src >> des;

    bfs(src);

    cout << "Shortest path length from " << src << " to " << des << " = " << level[des] << endl;

    return 0;
}
