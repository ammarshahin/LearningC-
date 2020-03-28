/****************************************************************
 *                       Files Includes
 * *************************************************************/
#include <iostream>
#include <string>

using namespace std;

/****************************************************************
 *                       Private Macros
 * *************************************************************/
#define MY_COMPANY_SIZE 3

/****************************************************************
 *                       Userdefined Data Types
 * *************************************************************/
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long int u32;

/****************************************************************
 *                       Database Struct
 * *************************************************************/
typedef struct
{
    string id;
    string age;
    string name;
    string contact;
} Person;

/****************************************************************
 *                           APIs
 * *************************************************************/
int main()
{
    Person companyMembers[MY_COMPANY_SIZE];
    cout << "Enter the Company info one By one: " << endl;
    for (int index = 0; index < MY_COMPANY_SIZE; index++)
    {
        cout << "\nNew Member.." << endl;
        cout << "Name: ";
        cin >> companyMembers[index].name;
        cout << "ID: ";
        cin >> companyMembers[index].id;
        cout << "Age: ";
        cin >> companyMembers[index].age;
        cout << "Phone number: ";
        cin >> companyMembers[index].contact;
    }

    cout << "\n\nThe Company members:" << endl;

    for (int index = 0; index < MY_COMPANY_SIZE; index++)
    {
        cout << "\nName: " << companyMembers[index].name;
        cout << "\nID: : " << companyMembers[index].id;
        cout << "\nAge: " << companyMembers[index].age;
        cout << "\nPhone number: " << companyMembers[index].contact;
    }
    return 0u;
}