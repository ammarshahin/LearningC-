//! Option is a way to return a Ok or Error in from a function

#include <bits/stdc++.h>
#include <optional>
using namespace std;

namespace options
{

//! First way
optional<bool> is_ammar(const string &user)
{
    if (user == "ammar" || user == "Ammar")
        return true;
    else
        return nullopt;
}

//! Second way
optional<bool> is_shahin(const string &user)
{
    optional<bool> op;
    if (user == "shahin" || user == "Shahin")
        op = true;
    return op;
}

void run(void)
{
    string user = "ammar3";
    if (is_ammar(user))
        cout << "is ammar" << endl;
    else
        cout << "not ammar" << endl;

    //! Second way
    string user2 = "shahin";
    auto ret = is_shahin(user2);

    if (ret.has_value())                                  // Check if Ok
        cout << "is shahin    " << ret.value() << endl;   // .value() to get the value inside
    else
        cout << "not shahin" << endl;
}

}   // namespace options
