#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    int *pArr = new int[n]; // Using Dynamic memory Allocation

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &pArr[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", pArr[i]);
    }

    return 0;
}
