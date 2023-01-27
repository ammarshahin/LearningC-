#include <iostream>
#include <stdint-gcc.h>
#include <bits/stdc++.h>

using namespace std;

int __abs(int x)
{
    // throw 3;
    if (x < 0)
        return -1 * x;
    return x;
}

int __abs_div(int x, int y) noexcept(noexcept(__abs(y)))
{
    return __abs(x) / __abs(y);
}

int main(int argc, const char **argv)
{

    cout << noexcept(__abs(0)) << endl;           // False
    cout << noexcept(__abs_div(0, -1)) << endl;   // False
    try
    {
        cout << __abs_div(6, 2) << "\n";   // 3
    }
    catch (...)
    {
        cout << "exception!\n";
    }

    //! the nothrow keyword (if this operation failed return a default return)
    int *p = new (nothrow) int[10];   //* if failed return nullptr

    if (p == nullptr)
    {
        cout << "Failed!\n";
    }
    else
    {
        cout << "Succeeded!\n";
        delete[] p;
        p = nullptr;
    }

    return 0;
}