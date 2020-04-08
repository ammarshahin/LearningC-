#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Complete the program
    string a, b, c;
    cin >> a >> b;
    c = a + b;
    cout << a.size() << " " << b.size() << endl;
    cout << c << endl;
    cout << a.reserve() << b.reserve() << endl;

    return 0;
}