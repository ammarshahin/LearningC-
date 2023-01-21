//* 1- the constrctor header can be inside a .h or .hpp file and the implementations in the .cpp or .c++ files(outside the class itself) */
/**** in the .hpp file *********/
class CarClass
{
  private:
    // class atrributes
  public:
    // class methodes prototype
    CarClass();
    ~CarClass();
    void setMaker(std::string m);
    void setModel(int m);
    std::string getMaker();
    int getModel();
};

/**** in the .cpp file *********/
/* the methodes impelemtation */
CarClass::CarClass()
{
}
CarClass::~CarClass()
{
}
void CarClass::setMaker(std::string m)
{
}
void CarClass::setModel(int m)
{
}
std::string CarClass::getMaker()
{
}
int CarClass::getModel()
{
}

//****************************************************************************************************************/
//* 2 -the initialization list is a way of giving the attributes initial value if the caller didn't pass any
class CarClass
{
  public:
    // class methodes prototype
    CarClass()
        : maker("BMW"), model(2020)
    {
    }

    /* this is constructor overloading (meaning that the calling constructor is dependant on the arguments that is passed while calling) */
    CarClass(std::maker mak, int mod)
        : maker(mak), model(mod)
    {
    }
};

//****************************************************************************************************************/
//* 3- Copy constructor is a way of initializing an object with another object by passing it in the constructor

ClassCar c1("Benz", 2020);
ClassCar c2(c1);   // c2 now has the same attributes value of the c1 (no code need to be written for it !!)
                   // Note : ClassCar c2(c1); == ClassCar c2 = c1;

//****************************************************************************************************************/
//* 4- the static attribute is shared between all of the objects that has been created from the class and must be initialized out side the class scope(as a global variable)
//* note: the static attribute remains the entirety of the prog(Like static in C)
class CarClass
{
  private:
    static int carCount;
}

int CarClass::carCount = 0;

//****************************************************************************************************************/
//* 5- the class methods are generic(service) methods that can be accesses through the class name directly without creating any object
class Calculator
{
  public:   // the static methods must be declared public
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
}

//****************************************************************************************************************/
//* 6- the explicit keyword is used to prevent the compiler from implicitly making the constructor with one argument
//* for example
class Foo
{
  public:
    // single parameter constructor, can be used as an implicit conversion
    // Foo(int foo)         // this will work
    explicit Foo(int foo)   // this won't work because the Foo constructor is an explicit one
        : m_foo(foo)
    {
    }

    int GetFoo()
    {
        return m_foo;
    }

  private:
    int m_foo;
};

//* Here's a simple function that takes a Foo object:
void DoBar(Foo foo)
{
    // do stuff
}

//* and here's where the DoBar function is called:
int main()
{
    DoBar(42);
}

//* 7- the operator overloading is always recommended to be prefix rather than postfix
//* for example
