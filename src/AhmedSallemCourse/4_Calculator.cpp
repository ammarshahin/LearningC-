#include <iostream>

using namespace std;

int main()
{
    signed int x, y;
    signed long long result;
    unsigned char opcode, againCondition;

    while (1)
    {
        result = 1;
        cout << "Enter the Operation and the Operands [ex  : x+y] : ";
        cin >> x >> opcode >> y;

        switch (opcode)
        {
        case '+':
            cout << "The result : " << x + y << endl;
            break;

        case '-':
            cout << "The result : " << x - y << endl;
            break;

        case '*':
            cout << "The result : " << x * y << endl;
            break;

        case '/':
            if (y != 0)
                cout << "The result : " << (double)x / y << endl;
            else
                cout << "Division by zero is not possible !!!" << endl;
            break;

        case '^':
            while (y)
            {
                result *= x;
                y--;
            }
            cout << "The result : " << result << endl;
            break;

        default:
            cout << "Wrong Entry !!!";
        }

        cout << "Again ? [y or n] : ";
        cin >> againCondition;

        if (againCondition == 'y' || againCondition == 'Y')
            continue;
        else
            break;
    }

    return 0;
}