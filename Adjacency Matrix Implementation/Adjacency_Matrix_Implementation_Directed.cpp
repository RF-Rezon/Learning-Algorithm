#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. 1st e input nilam.
    int n, e;
    cin >> n >> e;

    // 2. Shei inputer upor vitti kore matrix banailam. 2d arry arki.

    int adj_matrix[n][n];

    // 3. Matrix er sobgulo value er man 0 kore dilam. Caile nested for loop use koreo kora jay

    memset(adj_matrix, 0, sizeof(adj_matrix));

    // 4. Konakuni mangulo 1 thaka uchit. Tai agevagei 1 kore nilam.

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                adj_matrix[i][j] = 1;
        }
    }

    // 5. Loop caliye caliye sobgulo value matrix e vorlam.

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_matrix[a][b] = 1;
    }

    // 6. Loop caliye print korlam.

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adj_matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}