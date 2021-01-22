#include <iostream>
using namespace std;

class Calculator
{
  public: // the static methods must be declared public
    static int add(int n1, int n2)
    {
        return n1 + n2;
    }

    static int mul(int n1, int n2)
    {
        return n1 * n2;
    }

    static int div(int n1, int n2)
    {
        return n1 / n2;
    }
};

int main()
{
    int x = Calculator::add(5, 6);   // here we called the method without creating an object
    cout << x << endl;
}