#include <iostream>
#include <stdint-gcc.h>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v;
    vector<int> v2(5, 0);   // Create vector of type int with size 5 all initialized with 0

    v.push_back(10);
    v.push_back(5);
    v.push_back(6);

    cout << "v: ";
    for (auto &val : v2)
        cout << val << " ";

    return 0;
}

//! Vector is basically an array with some Capacity eg. 200
//! when u push 10 elements >> size = 10 ,,, capacity = 200
//! when u push 200 elements >> size = 200 ,,, capacity = 200
//! when we try to push a another element >> the compiler creates anew array with capacity = 400 >> copies the old vector to the new one >> now size = 201 ,,, capacity = 400

//* the function reserve is used to force a cretan capacity from the beginning