//! Reference Variables: A reference is a name that acts as an alias, or an alternative name, for a previously defined variable.

int rats;
int &rodents = rats;   // makes rodents an alias for rats

//* Note : You should initialize a reference variable when you declare it. A reference is rather like a const pointer; you have to initialize it when you create it, and when a reference pledges its allegiance to a particular variable, it sticks to its pledge.

//* Use const When You Can .. There are three strong reasons to declare reference arguments as references to constant data:
//*    - Using const protects you against programming errors that inadvertently alter data.
//*    - Using const allows a function to process both const and non-const actual arguments, whereas a function that omits const in the prototype only can accept nonconst data.
//*    - Using a const reference allows the function to generate and use a temporary variable appropriately.
//* You should declare formal reference arguments as const whenever it’s appropriate to do so.

//* C++11 introduces a second kind of reference, called an rvalue reference, that can refer to an rvalue. It’s declared using &&:

double &&rref = std::sqrt(36.00);   // not allowed for double &
double j = 15.0;
double &&jref = 2.0 * j + 18.5;   // not allowed for double &
std::cout << rref << '\n';        // display 6.0
std::cout << jref << '\n';        // display 48.5;

//* The rvalue reference was introduced mainly to help library designers provide more efficient implementations of certain operations.

//* When to Use Reference Arguments. There are two main reasons for using reference arguments:
//*     - To allow you to alter a data object in the calling function
//*     - To speed up a program by passing a reference instead of an entire data object

//! Default Arguments : A default argument is a value that’s used automatically if you omit the corresponding actual argument from a function call.

//* When you use a function with an argument list, you must add defaults from right to left.That is, you can’t provide a default value for a particular argument unless you also provide defaults for all the arguments to its right:

int harpo(int n, int m = 4, int j = 5);         // VALID
int chico(int n, int m = 6, int j);             // INVALID
int groucho(int k = 1, int m = 2, int n = 3);   // VALID

//* The defult argument feature makes it easier to create optional argument to pass or not (it's essentially equivelent to making 2 overloaded functions with the same name but they have different number of arguments)
//* Ex:
void fun(int x = 1);
void fun(int x = 1)
{
    // Do Stuff
}

//* So now you can call 'fun' with argument or not {fun(); == fun(1)}

//* This is equivelent to making 2 function overloading
void fun(int x);
void fun();

void fun(int x)
{
    // Do Stuff
}

void fun()
{
    int x = 1;
    // Do Stuff
}

//! Function Overloading

//* Function polymorphism is a neat C++ addition to C’s capabilities.Whereas default arguments let you call the same function by using varying numbers of arguments, function polymorphism, also called function overloading, lets you use multiple functions sharing the same name.The word polymorphism means having many forms, so function polymorphism lets a function have many forms. Similarly, the expression function overloading means you can attach more than one function to the same name, thus overloading the name.

//* C++ uses the context to decide which version of an overloaded function is intended (different signatures >> Same name but different num/type of arguments).

//* Keep in mind that the signature, not the function type, enables function overloading. >> The input arguments not the return type

//! Name Decoration ? = C++ It assigns a secret identity to each of these functions. C++ compiler performs a name decoration or name mangling—through which each function name is encrypted, based on the formal parameter types specified in the function’s prototype.

//* long MyFunctionFoo(int, float); == ? MyFunctionFoo @ @YAXH

//! Function Templates (generic programming)

//* A function template is a generic function description; that is, it defines a function in terms of a generic type for which a specific type, such as int or double, can be substituted. By passing a type as a parameter to a template, you cause the compiler to generate a function for that particular type.
//* Ex:

template <typename AnyType>   // The keywords template and typename are obligatory(Must), only exception is to replace typename with class in case of using class as template >> class keyword is more generic (C++98)
void Swap(AnyType &a, AnyType &b)
{
    AnyType temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int ix = 10, iy = 20;
    Swap(ix, iy);   // Swap is now a function that (takes int, int) >> Swap(int x, int y) >> this is done automatically

    double dx = 5.5, dy = 12.2;
    Swap(dx, dy);   // Swap is now a function that (takes double, double) >> Swap(double x, double y) >> this is done automatically
}

//* Note: Function templates don’t make executable programs any shorter. You still wind up with two separate function definitions, just as you would if you defined each function manually. And the final code doesn’t contain any templates; it just contains the actual functions generated for the program. The benefits of templates are that they make generating multiple function definitions simpler and more reliable.

//* The specialization mechanism

//*     - For a given function name, you can have a non template function, a template function, and an explicit specialization template function, along with overloaded versions of all of these.
//*     - The prototype and definition for an explicit specialization should be preceded by template <> and should mention the specialized type by name.
//*     - A specialization overrides the regular template, and a non template function overrides both.426 Chapter 8 Adventures in Functions

//* Here’s how prototypes for swapping type job structures would look for these three forms:

// non template function prototype (Highest priority)
void Swap(job &, job &);

// template prototype (Lowest priority)
template <typename T>
void Swap(T &, T &);

// explicit specialization for the job type (Medium priority)
template <>
void Swap<job>(job &, job &);

// simpler form of explicit specialization
template <>
void Swap(job &, job &);
//*  if more than one of these prototypes is present, the compiler chooses the non template version over explicit specializations and template versions, and it chooses an explicit specialization over a version generated from a template

//* When the compiler uses the template to generate a function definition for a particular type, the result is termed an instantiation of the template.
//* Swap()      >> implicit instantiation
//* Swap<int>() >> explicit instantiation

//! Instantiations and Specializations

//*  including a function template in your code does not in itself generate a function definition. It’s merely a plan for generating a function definition. When the compiler uses the template to generate a function definition for a particular type, the result is termed an instantiation of the template.

//* implicit instantiation : because the compiler deduces the necessity for making the definition by noting that the program uses a Swap() function with int parameters.
//* explicit instantiation.That means you can instruct the compiler to create a particular instantiation
template void Swap<int>(int, int);   // explicit instantiation

template <>
void Swap<int>(int &, int &);   // explicit specialization

template <>
void Swap(int &, int &);   // explicit specialization

//* The difference is that these last two declarations mean “Don’t use the Swap() template to generate a function definition. Instead, use a separate, specialized function definition explicitly defined for the int type.”These prototypes have to be coupled with their own function definitions.The explicit specialization declaration has <> after the keyword template, whereas the explicit instantiation omits the <>.

//* Implicit instantiations, explicit instantiations, and explicit specializations collectively are termed specializations.What they all have in common is that they represent a function definition that uses specific types rather than one that is a generic description.

//* Ex:

template <class T>
void Swap(T &, T &);   // template prototype

template <>
void Swap<job>(job &, job &);   // explicit specialization for job

int main(void)
{
    template void Swap<char>(char &, char &);   // explicit instantiation for char

    short a, b;
    Swap(a, b);   // implicit template instantiation for short

    job n, m;
    Swap(n, m);   // use explicit specialization for job

    char g, h;
    Swap(g, h);   // use explicit template instantiation for char
}

//! overload resolution : The way compiler deals with function tempelates and function overloading.

//* Phase 1—Assemble a list of candidate functions.These are functions and templatefunctions that have the same names as the called functions.

//* Phase 2—From the candidate functions, assemble a list of viable functions.These are functions with the correct number of arguments and for which there is an implicit conversion sequence, which includes the case of an exact match for each type of actual argument to the type of the corresponding formal argument. For example, a function call with a type float argument could have that value converted to a double to match a type double formal parameter, and a template could generate an instantiation for float.

//* Phase 3—Determine whether there is a best viable function. If so, you use that function.Otherwise, the function call is an error.

// FIXME: The rest of the Chapter is pretty advanced stuff That can be read later.

//! What’s That Type?
//! The decltype Keyword (C++11)

//* The C++11 solution is a new keyword: decltype. It can be used in this way:
int x;
decltype(x) y;   // make y the same type as x

//* The argument to decltype can be an expression, so in the ft() example, we could use this code:
decltype(x + y) xpy;   // make xpy the same type as x + y
xpy = x + y;

//* Alternatively, we could combine these two statements into an initialization:
decltype(x + y) xpy = x + y;

double xx = 4.4;
decltype((xx)) r2 = xx;   // r2 is double &
decltype(xx) w = xx;      // w is double (Stage 1 match)

//! trailing return type :
auto h(int x, float y) -> double;

//* This moves the return type to after the parameter declarations.
//! auto : is a placeholder for the type provided by the trailing return type.

//* Combining this syntax with decltype leads to the following solution for specifying the return type for gt():

template <class T1, class T2>
auto gt(T1 x, T2 y) -> decltype(x + y)
{
    return x + y;
}

//* Now decltype comes after the parameter declarations, so x and y are in scope and can be used.

//! Summary

//* C++ has expanded C function capabilities. By using an inline keyword with a function definition and by placing that definition ahead of the first call to that function, you suggest to the C++ compiler that it make the function inline.That is, instead of having the program jump to a separate section of code to execute the function, the compiler replaces the function call with the corresponding code inline.An inline facility should be used only when the function is short.

//* A reference variable is a kind of disguised pointer that lets you create an alias (that is, a second name) for a variable. Reference variables are primarily used as arguments to functions that process structures and class objects. Normally, an identifier declared as a reference to a particular type can refer only to data of that type. However, when one class is derived from another, such as ofstream from ostream, a reference to the base type may also refer to the derived type.

//* C++ prototypes enable you to define default values for arguments. If a function call omits the corresponding argument, the program uses the default value. If the function includes an argument value, the program uses that value instead of the default. Default arguments can be provided only from right to left in the argument list.Thus, if you provide a default value for a particular argument, you must also provide default values for all arguments to the right of that argument.

//* A function’s signature is its argument list.You can define two functions having the same name, provided that they have different signatures.This is called function polymorphism, or function overloading.Typically, you overload functions to provide essentially the same service to different data types.

//* Function templates automate the process of overloading functions.You define a function by using a generic type and a particular algorithm, and the compiler generates appropriate function definitions for the particular argument types you use in a program.