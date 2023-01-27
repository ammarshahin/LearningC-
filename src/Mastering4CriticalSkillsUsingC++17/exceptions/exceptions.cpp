#include <iostream>
#include <stdint-gcc.h>
#include <bits/stdc++.h>

using namespace std;

int *create_arr(int len)
{
    if (len < 1)
        throw invalid_argument("Array len can't be -ve or 0");
    else if (len > 100)
        throw runtime_error("Array size very large");

    return new int[len];   //! This can throw a bad_alloc exception
}

int main(int argc, char const *argv[])
{

    try
    {
        int *p = create_arr(1000);
    }
    catch (invalid_argument &ex)   //* any invalid_argument throw
    {
        cout << "invalid_argument: " << ex.what() << endl;
    }
    catch (runtime_error &ex)   //* any runtime throw
    {
        cout << "runtime_error: " << ex.what() << endl;
    }
    catch (int &ex)   //* any int throw
    {
        cout << "error code: " << ex << endl;
    }
    catch (...)   //* default catch
    {
        cout << "Exception!" << endl;
    }

    cout << "End of the Program!!" << endl;
    return 0;
}
