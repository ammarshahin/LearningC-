#include <iostream>

using namespace std;

int main()
{
    int x, y;
    char opcode, againCondition;

    while (1)
    {
        cout << "Enter the Operation and the Operands [ex: x+y] : " << endl;
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
                cout << "The result : " << x / y << endl;
            else
                cout << "Division by zero is not possible !!!" << endl;
            break;
        default:
            cout << "Wrong Entery !!!";
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