#include <iostream>
#include <stdint-gcc.h>
#include <bits/stdc++.h>

using namespace std;

void print(const map<string, int> &m)
{
    cout << "m:";
    for (const auto &val : m)   //* Val is a pair<const string, int>
        cout << "{" << val.first << "," << val.second << "},";
    cout << endl;
}

//! A map is an Array(key and value) with index of any value (rather than integer)
//! Sorted and have unique indexes
int main(int argc, char const *argv[])
{
    map<string, int> m;                 //* Array with index string values
    m.insert(make_pair("ammar", 10));   //* insert way
    m["mostafa"] = 20;                  //* another insert way
    print(m);
    return 0;
}