#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    int variableGuessed = 0;

    while (variableGuessed != 4)
    {
        cout << "Guess a number between 1 and 9" << endl;
        cin >> variableGuessed;
        cout << endl;
    }
    return 0;
}