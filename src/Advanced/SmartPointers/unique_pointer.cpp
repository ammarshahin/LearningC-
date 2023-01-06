#include <bits/stdc++.h>
using namespace std;

template <class _Ty>
class _unique_ptr
{

    _Ty *ptr;

  public:
    _unique_ptr()
    {
    }

    explicit _unique_ptr(_Ty *p)
        : ptr(p)
    {
    }

    _Ty &operator*()
    {
        return *ptr;
    }

    _Ty *operator->()
    {
        return ptr;
    }

    ~_unique_ptr()
    {
        cout << "Called the deconstructor\n";
        delete[] ptr;
    }

    _unique_ptr(_unique_ptr &p) = delete;
    _unique_ptr operator=(_unique_ptr &p) = delete;
};

int main(int argc, char const *argv[])
{
    //!  OLD COMPLEX WAY
    int *ptr = new int(4);
    cout << *ptr << endl;
    delete ptr;

    //* New Way
    unique_ptr<int> u_ptr(new int(5));
    cout << *u_ptr << endl;

    //* Better way
    unique_ptr<int> n_ptr = make_unique<int>(4);
    cout << *n_ptr << endl;

    //* My Implementation
    _unique_ptr<int> o_ptr(new int(8));
    cout << *o_ptr << endl;

    return 0;
}
