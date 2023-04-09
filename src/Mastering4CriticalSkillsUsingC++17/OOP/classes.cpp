#include <iostream>
#include <stdint-gcc.h>
#include <bits/stdc++.h>

using namespace std;

class Employee
{
    string name;
    int id;
    static int employee_count;

  public:
    Employee() = default;
    Employee(const string &name, int id)
        : name(name), id(id)
    {
        employee_count++;
    }

    static int static_getEmployeeCount()   // can only be called with the class scope Employee:: getEmployeeCount
    {
        return employee_count;
    }

    int getEmployeeCount()   // can called with the object access obj.getEmployeeCount
    {
        return employee_count;
    }
};

int Employee::employee_count = 0;

void classes()
{
    [[maybe_unused]] Employee e1("mostafa", 10);
    [[maybe_unused]] Employee e2("mostafa", 10);
    [[maybe_unused]] Employee e3("mostafa", 10);
    [[maybe_unused]] Employee e4("mostafa", 10);

    cout << "static count = " << Employee::static_getEmployeeCount() << '\n';
    cout << "count e1 = " << e1.getEmployeeCount() << '\n';
    cout << "count e2 = " << e2.getEmployeeCount() << '\n';
    cout << "count e3 = " << e3.getEmployeeCount() << '\n';
    cout << "count e4 = " << e4.getEmployeeCount() << '\n';
}
