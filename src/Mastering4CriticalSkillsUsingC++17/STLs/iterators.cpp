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

//! more fancy way
void print_front_fancy(deque<int> &q)
{
    for (auto it = q.begin(); it != q.end(); ++it)
    {
        cout << *it << " ";
    }
}

int main(int argc, char const *argv[])
{
    deque<int> q{1, 2, 3, 4, 5};
    // print_front(q);
    print_front_fancy(q);
    return 0;
}

//! u can't make iterators over stack, queue, and priority queue
//! we can use the reverse_iterator to iterate over a a data structure in reverse using rbegin() and rend() 
//! A const iterator is used to iterate over a data structure without the ability to manipulate it's values
