/********** template ************/
#include <iostream>
using namespace std;

template <class R, class T, int n = 5> // R & T are Template parameter, n is a global variable 

class Test
{
    T a, b;

public:
    Test(T a, T b)
    {
        this->a = a;
        this->b = b;
    }

    R divfunc() // Template function
    {
        cout << "n = " << n << endl;
        return (R)this->a / this->b;
    }
};

int main()
{
    Test<double, int,6> clT(10, 2.1); // replace the R template with double and replace the T template with int
    cout << "The g = " << clT.divfunc() << endl;
    return 0;
}
