#include <iostream>
#include <stdint-gcc.h>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    pair<int, string> person = make_pair(10, "name");
    // pair<int, string> person = pair("ammar", 54);   //! Works on C++17, not 11 nor 14 (Called template argument deduction)

    cout << "name = " << person.second << " and his age is " << person.first;

    return 0;
}

///! pair only takes 2 elements
