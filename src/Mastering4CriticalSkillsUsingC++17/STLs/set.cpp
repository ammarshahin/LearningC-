#include <iostream>
#include <stdint-gcc.h>
#include <bits/stdc++.h>

using namespace std;

void print(const set<string> &s)
{
    cout << "s:";
    for (auto &val : s)
        cout << " " << val;
    cout << endl;
}

int main(int argc, char const *argv[])
{
    //! Set is a data structure that are sorted and unique
    set<string> s;   // sorted and unique >> only accept new unique values >> (No repeats)
    s.insert("shahin");
    s.insert("ammar");
    s.insert("ammar");   // This will have no effect >> (No repeats)
    s.insert("zid");
    print(s);

    //* Find element in Set
    auto it = s.find("shahin");
    if (it != s.end())
        cout << "Found" << endl;

    return 0;
}

//! we can use a multiset instead of set if we wanted to allow repeats

//! to make a set of structs we will need to provide an operator overloading < for the set to be able to compare and sort the values
struct employee
{
    int num1, num2;
    employee(int a, int b)
    {
        num1 = a;
        num2 = b;
    }

    //* operator overloading for the struct employee
    bool operator<(const employee &rhs) const
    {
        return tie(num1, num2) < tie(rhs.num1, rhs.num2);
    }
};

//* unordered set
//! The unordered set is a set that arne't ordered or sorted
//! removes duplicates value
//! values can't be changed once they are inserted
//! no reverse iterators
//! Extremely fast data structure >> it uses hash table internally to implement
//! can use this syntax to initialize

int arr[]{20, 10, 20, 30, 7, 0};
unordered_set<int> s(arr, arr + 3);
