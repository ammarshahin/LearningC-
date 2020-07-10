#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q, m, o, r, s;
    cin >> n >> q;
    vector<int> a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            cin >> o;
            a[i].push_back(o);
        }
    }

    for (int k = 1; k <= q; k++)
    {
        cin >> r >> s;
        cout << a[r][s] << endl;
    }

    return 0;
}