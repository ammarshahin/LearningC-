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
