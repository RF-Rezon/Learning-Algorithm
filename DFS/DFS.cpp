#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool visited[1005];

void dfs(int srcnode)
{
    cout << srcnode << " ";
    visited[srcnode] = true;
    for (int children : adj_list[srcnode])
    {
        if (!visited[children])
            dfs(children);
    }
}

int main()
{
    int n, e; // node, edge
    cin >> n >> e;

    while (e--) // Jotogula edge, totobar loop colbe. Adjacency list banabo.
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);

        // Adjacency list banabo done.
    }
    memset(visited, false, sizeof(visited)); // Adjacency list er sobgular man by default false baniye nilam.
    dfs(0);
    return 0;
}

// 0 1 4 6 5 3 2