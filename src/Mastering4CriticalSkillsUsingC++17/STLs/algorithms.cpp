#include <iostream>
#include <stdint-gcc.h>
#include <bits/stdc++.h>

using namespace std;

void print(const vector<int> &v)
{
    cout << "v :";
    for (const auto &val : v)
        cout << " " << val;

    cout << endl;
}

int main(int argc, char const *argv[])
{
    vector<int> v{1, 2, 3, 4, 5, 8, 4, 2, 0};
    print(v);

    //! Sort
    sort<vector<int>::iterator>(v.begin(), v.end());
    print(v);

    return 0;
}