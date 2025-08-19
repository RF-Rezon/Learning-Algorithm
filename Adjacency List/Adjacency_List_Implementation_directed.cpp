#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> adj_list[n]; // Array banalam jar protiti ghore vector thakbe ja abr ekadhik man songrokkhon korte pare.

    while (e--) // Jotogula adge, totobar loop cole.
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
    }

    for (int i = 0; i < n; i++) // array te loop calacchi. vector pabo.
    {
        cout << i << " -> ";
        for (int x : adj_list[i]) // Vector theke 1 ta  1 ta man ber korchi.
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;

    // Kar sathe ke ke connected eta index wise dhore dekhano - khub sundor ekta way.
}