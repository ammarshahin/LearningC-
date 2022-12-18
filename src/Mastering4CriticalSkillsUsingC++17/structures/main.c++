#include <iostream>
#include <stdint-gcc.h>
#include <string>

using namespace std;

struct employee
{
  private:
    uint32_t salary;
    string name;

  public:
    employee()
    {
        this->name = "";
        this->salary = 0;
    }

    employee(const string &name, const uint32_t &salary)
    {
        this->name = name;
        this->salary = salary;
    }

    string get_employee_name()
    {
        return name;
    }

    uint32_t get_employee_salary()
    {
        return salary;
    }

    void set_employee_name(const string &name)
    {
        this->name = name;
    }

    void set_employee_salary(const uint32_t &salary)
    {
        this->salary = salary;
    }
};

int main(int argc, const char **argv)
{
    employee ahmed;   // Called with default constructor
    ahmed.set_employee_name("Ahmed");
    ahmed.set_employee_salary(10000);

    employee ahmed, mohamed("Mohamed", 8000);   // Called with implicit constructor
    cout << "First employee name: " << ahmed.get_employee_name() << " ,and his salary is " << ahmed.get_employee_salary() << endl;
    cout << "Second employee name: " << mohamed.get_employee_name() << " ,and his salary is " << mohamed.get_employee_salary() << endl;
}