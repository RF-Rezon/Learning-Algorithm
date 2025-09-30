#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool visited[1005];
int level[1005];
int prnt[1005]; // Parent Array to track Parent node.

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
                prnt[children] = parent;
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
    memset(prnt, -1, sizeof(prnt));

    int src, des;
    cin >> src >> des;

    bfs(src);

    cout << "Shortest path length from " << src << " to " << des << " = " << level[des] << endl;

    vector<int> path;
    int node = des;
    while (node != -1)
    {
        path.push_back(node);
        node = prnt[node];
    }

    reverse(path.begin(), path.end());

    for (int i : path)
    {
        cout << i << " ";
    }

    return 0;
}
