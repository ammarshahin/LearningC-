/* 1. 
** Namespace is a collection of data an functions and objects (a bag).
** These collections can be accessed via accesses operator (or scope operator) :: 
** ex: */
std::cout;   // it a good practice to set the namespace and the accesses operator rather than " using namespace "
std::cin;
std::endl;

/* 2.
<< is Insertion operator 
** ex: */
std::cout << 5;   // this mean insert 5 into cout

/* 3.
>> is Extraction operator 
** ex: */
std::cin >> x;   // this mean Extract the value form the user and put it in the variable x

/* 4. "auto" is C++11 keyword that is used for auto detection the variables types
** ex: */
auto x = 10.5;   // this mean the variable x will be treated as double type
auto y = 5;      // this mean the variable y will be treated as int type
/* Note: It's a bad practice to overuse the auto keyword */

/* 5. Uniform initialization in C++11
 * ex: 
 * Normal           Constructor    Recommended in C++11   */
int x = 10.5 == int x(10) == int x{10};

/* 6. For each loop in C++11
 * is away of making the for loop simplier.
 * ex: */
int elements[] = {1, 2, 3, 4, 5} for (int element : elements)   // for each loop the element variable takes a new value in the array elements
                 std::cout
                 << element << std::endl

                 /**
 * 7. Lambda functions in C++11 (Very new concepts -_-) >> pointer to generic function
 * are functions that don't have a a specific name.
 * ex: 
 **/
                 auto sum_func = [](int x, int y) -> int {
    return x + y;
};

/**
 * 8. Include the standard C libraries in Cpp
 * by only adding "c" before the name of the standard library 
 */
#include <stdio.h>  ==  #include <cstdio>
#include <stdlib.h> ==  #include <cstdlib>
#include <math.h>   ==  #include <cmath>
