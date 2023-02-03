#include <bits/stdc++.h>
using namespace std;

namespace lambda
{

void printVector(const vector<int> &v, const function<void(int)> func)
{
    cout << "Vector : ";
    for (int value : v)
        func(value);

    cout << endl;
}

void run(void)
{
    vector<int> v{1, 2, 3, 4, 5};
    // printVector(v, [](int value) { cout << value << " "; });

    int a = 5;
    auto lambda1 = [](int value) { cout << value << " "; };   // this doesn't take anything from the outside of the outer scope
    // printVector(v, lambda1);

    //! Copy closure
    auto lambda2 = [=](int value) { cout << value * a << " "; };   // this take everything from the outside of the outer scope as a COPY (Can't reassign it)
    // printVector(v, lambda2);

    //! use of mutable keyword
    auto lambda3 = [=](int value) mutable { a =  4; cout << value * a << " "; };   // this take everything from the outside of the outer scope as a COPY (But doesn't effect the original variable)
    // printVector(v, lambda3);

    //! use of Ref closure
    auto lambda4 = [&](int value) { a =  4; cout << value * a << " "; };   // this take everything from the outside of the outer scope as a Reference (effects the original variable)
    // printVector(v, lambda4);

    //! use of Ref closure (Specific elements)
    auto lambda5 = [&a](int value) { a =  4; cout << value * a << " "; };   // this take only specific variables from the outside of the outer scope as a Reference (effects the original variable)
    // printVector(v, lambda5);

    // cout << "a = " << a << endl;

    //! use of a closure that returns something
    auto lambda6 = [](int value) -> bool { return value > 3; };   // this take only specific variables from the outside of the outer scope as a Reference (effects the original variable)

    auto it = find_if(v.begin(), v.end(), lambda6);
    // cout << *it;

    //! for each usage
    for_each(v.begin(), v.end(), [](int x) {
        cout << " " << x;
    });
}

//* for the capture closure
// [] >> No Capture
// [=] >> Capture All by value
// [&] >> Capture All by reference
// [x] >> Capture x by value (Can't change it's value inside the lambda function)
// [x] () mutable {} >> Capture x by value (Can change it's value inside the lambda function)
// [&x] >> Capture x by reference
// [&,x] >> Capture x by value, everything else by ref
// [=,&x] >> Capture x by ref, everything else by value

//* The following are all the same implementation (Lambda expresion can deduce the return type of the function by itself)
auto lambda_1 = [](void) -> void { cout << "Hello World!!" << endl; };
auto lambda_2 = [](void) { cout << "Hello World!!" << endl; };
auto lambda_3 = [] { cout << "Hello World!!" << endl; };

}   // namespace lambda
