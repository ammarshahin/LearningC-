#include <iostream>
#include <stdint-gcc.h>
#include <tuple>

using namespace std;

int main(int argc, char const *argv[])
{
    //* create and initialize
    tuple<char, int, string> p = make_tuple('A', 10, "ammar");
    cout << "p[0] = " << get<0>(p) << ", p[1] = " << get<1>(p) << ", p[2] = " << get<2>(p) << endl;

    //* set a value of an element
    get<0>(p) = 'd';
    cout << "p[0] = " << get<0>(p) << ", p[1] = " << get<1>(p) << ", p[2] = " << get<2>(p) << endl;

    //* tie >> break or unpack values from the tuple to individual values
    char ch;
    int val;
    string name;
    tie(ch, val, name) = p;
    cout << "p[0] = " << ch << ", p[1] = " << val << ", p[2] = " << name << endl;

    //* concatenating 2 tuples
    auto t = tuple_cat(p, make_tuple(10, 6));
    cout << "p[0] = " << get<0>(t) << ", p[1] = " << get<1>(t) << ", p[2] = " << get<2>(t) << ", p[3] = " << get<3>(t) << ", p[4] = " << get<4>(t) << endl;

    return 0;
}

//! tuple takes any number on arguments
//! the use of get<element_position>(tuple name) to get and set elements value
//! check the new C++17 tuple syntax
//! the tie function is used to break any struture to it's building blocks
