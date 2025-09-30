#include <bits/stdc++.h>
using namespace std;

int main()
{
    int e;
    cin >> e;

    vector<pair<int, int>> edge_list; // Vector diya list banailam. Shei list e protita ghore ekta kore pair.

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        edge_list.push_back({a, b}); // Input niye seta pair akare list e push.
    }

    for (pair<int, int> x : edge_list)
    {
        cout << x.first << " - " << x.second << endl;
    }

    // Or evabe.....

    // for (auto x : edge_list)
    // {
    //     cout << x.first << " - " << x.second << endl;
    // }

    return 0;
}

// Ekhane koyta node seta lage na. Cz ekhane amra just connection guloke list e rakhi.