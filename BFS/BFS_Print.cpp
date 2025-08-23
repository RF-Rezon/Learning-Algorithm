#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool visited[1005];

void bfs(int srcnode)
{
    queue<int> q;
    q.push(srcnode);
    visited[srcnode] = true;

    while (!q.empty())
    {
        // Queue theke ber kore ana
        int parent = q.front();
        q.pop();
        // Oi (Nodeo or ja ase) take niye kaj
        cout << parent << " ";
        // children push
        for (int children : adj_list[parent])
        {
            if (!visited[children])
            {
                q.push(children);
                visited[children] = true;
            }
        }
    }
}

int main()
{

    int n, e; // node, edge
    cin >> n >> e;

    while (e--) // Jotogula adge, totobar loop colbe.
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(visited, false, sizeof(visited));
    bfs(0);

    return 0;
}