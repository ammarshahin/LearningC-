//* the Polymorphism makes dynamic binding (Dynamic linkage) >> meaning it understands that the virtual method has been overriding and the child class now has it's own implementation of this method
//* without the virtual keyword the compiler will make early(static) binding to the method and will call the parent method always

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

    virtual void display()   // is now a virtual method
    {
        std::cout << name << "  " << age << std::endl;
    }

    //* Person is now an abstract class (can be inherited but can't make any objects)
    //* Pure virtual function
    //* This way indicates that the display fuction in the parent class has no implementation and the parent class itself can't make any objects
    //* Note that now all the childs from this class has to implement this method (must override this method)
    // virtual void display() = 0;

    //* the final keyword indicates that this method implementation is final and the method can't be overridden (c++11 extention)
    virtual void name_set(std::string name) final
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
    }

    ~Student()
    {
        ;
    }
};

int main(int argc, const char **argv)
{
    Student s1;
    s1.display();   // We are know calling the local display method

    /* "new" is an operator that creates an object */
    Person *s2 = new Student("ammar", 25, 10);   // s2 is a Pointer that points to Person Class or any Child of it (Polymorphism)
    s2->display();                               // We are know calling the local display method

    Person *s3 = new Person("Fatma", 22);   // s3 is a Pointer that points to Person Class or any Child of it (Polymorphism)

    s3->display();

    return 0;
}