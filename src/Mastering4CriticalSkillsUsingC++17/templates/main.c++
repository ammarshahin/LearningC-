#include <iostream>
#include <stdint-gcc.h>
#include <string>

using namespace std;

template <typename type>
type sum(const type &a, const type &b)
{
    type c = a + b;
    return c;
}

// for specific data type that we don't want to be overwrites
template <>
string sum(const string &a, const string &b)
{
    string c = a;
    c.append(" ");
    c.append(b);
    return c;
}

int main(int argc, const char **argv)
{
    cout << "5 + 6 = " << sum<uint16_t>(5u, 6u) << endl;
    cout << "5.2 + 6.0 = " << sum(5.2f, 6.0f) << endl;                       // or  sum<double>(5.2f, 6.0f) to implicitly infer the datatype
    cout << "ammar + shahin = " << sum<string>("ammar", "shahin") << endl;   // <string> infer here is a must to force a string datatype

    return 0;
}