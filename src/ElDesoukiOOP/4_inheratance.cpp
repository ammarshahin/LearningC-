#include <iostream>
#include <stdint-gcc.h>
#include <string>

class Person
{
  protected:
    std::string name;
    int age;

  public:
    Person()
        : name("none"), age(0)
    {
        ;
    }

    Person(const std::string &name, int age)
        : name(name),
          age(age)
    {
        ;
    }

    void display()
    {
        std::cout << name << "  " << age << std::endl;
    }

    void name_set(const std::string &name)
    {
        this->name = name;
    }

    std::string name_get()
    {
        return this->name;
    }

    void age_set(int age)
    {
        this->age = age;
    }

    int age_get()
    {
        return this->age;
    }

    ~Person()
    {
        ;
    }
};

// public means that the childs will inherit every method (public and protected) from the parent with it's scope {public -> public , protected -> protected}
// protected means that the childs will inherit every method (public and protected) from the parent with it's scope {public -> protected , protected -> protected}
// private means that the childs will inherit every method (public and protected) from the parent with it's scope {public -> private , protected -> private}
class Student : public Person
{
  private:
    int id;

  public:
    Student()
        : Person(), id(0)   // this maps the child constructor to the parent constructor
    {
        ;
    }

    Student(const std::string &name, int age, int id)
        : Person(name, age), id(id)   // this maps the child constructor to the parent constructor
    {
        ;
    }

    void display()   // this method is now overriding the parent method and called instead
    {
        std::cout << name << "  " << age << "  " << id << std::endl;
        Person::display();   // this will call the base class method
    }

    ~Student()
    {
        ;
    }
};

int main(int argc, const char **argv)
{
    Student s1, s2("ammar", 25, 10);

    s1.display();   // We are know calling the local display method
    s2.display();   // We are know calling the local display method

    s1.Person::display();   // We are know calling the parent display method
    s2.Person::display();   // We are know calling the parent display method

    return 0;
}