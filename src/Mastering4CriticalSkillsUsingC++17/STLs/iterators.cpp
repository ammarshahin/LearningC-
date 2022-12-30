//! iterators is an object, but think of it like a position in an array
//! begin() = first element
//! end() = After last element

#include <iostream>
#include <stdint-gcc.h>
#include <deque>

using namespace std;

void print_front(deque<int> &q)
{
    deque<int>::iterator it = q.begin();

    cout << "Queue elements : ";

    while (it != q.end())
    {
        cout << *it << " ";
        ++it;
    }
}

int main(int argc, char const *argv[])
{
    deque<int> q{1, 2, 3, 4, 5};
    print_front(q);
    return 0;
}
