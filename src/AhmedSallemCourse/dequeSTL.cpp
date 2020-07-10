/**
 * @file dequeSTL.cpp
 * 
 * @author Ammar Shahin (ammar0shahin@gmail.com)
 * 
 * @brief This file is to explore the deque standard library
 * Note: the main diffrance between the vectors and the deques is that the deques is not 
 * stored in contigious memory locations like the vector
 * 
 * @version v1
 * 
 * @date 2020-05-07
 * 
 * @copyright Copyright (c) 2020
 * 
 */

/************************************************************/
/********************** INCLUDES ****************************/
/************************************************************/
#include <iostream>
#include <deque>

/* Const variabel size */
const int size = 40;

/* Prototypes */
int dequeSum(std::deque<int> v, int size);

/**
 * @brief The entry function to the program
 * 
 * @return int status of the program return to the operating system [0 >> no error, -1 >> error]
 */
int main()
{
    // Declaring a deque with Constructor
    std::deque<int> d1(10); // Make a deque with 10 int elements that have an initialization value of 0 (heap)
    std::cout << d1[0] << std::endl;

    std::deque<int> d2(3, 7); // Make a deque with 3 int elements that have an initialization value of 7
    std::cout << d2[0] << std::endl;

    std::deque<int> d3{4, 5, 6, 7, 9}; // Make a deque with 4 int elements that have an initialization value of the entered values
    std::cout << d3[0] << std::endl;
    std::cout << d3.at(0) << std::endl;  // Better way to access the elements of the deque d3.at(0) == d3[0]
    std::cout << d3.size() << std::endl; // return the size of the deque

    /* ex: */
    std::deque<int> x; // Make a deque with 0 elements (without Constructor)
    int sum = 0;

    for (int i = 0; i < size; ++i)
        x.push_back(i); // add an element to the deque with the value of i (dynamic memory allocation)

    sum = dequeSum(x, x.size());

    if (x.empty()) // Check if the deque is empty
        std::cout << "Empty deque" << std::endl;
    else
        std::cout << "the Sum of the " << x.size() << " element is : " << sum << std::endl;

    /* Print the deque */
    for (int i : x) // using for-each loop [i will be equal to the next element in each iteration]
        std::cout << i << " ";

    std::cout << std::endl;

    x.pop_back(); // remove the last element from the deque [x[39] = 39]

    for (int i : x) // using for-each loop [i will be equal to the next element in each iteration]
        std::cout << i << " ";

    std::cout << std::endl;

    x.push_front(100); // push a new element to the front of the deque

    for (int i : x) // using for-each loop [i will be equal to the next element in each iteration]
        std::cout << i << " ";

    std::cout << std::endl;
    return 0;
}

/**
 * @brief this function is used to sum the elements of the deque 
 * 
 * @param v deque of elements
 * @param size size of the deque
 * @return int the sum 
 */
int dequeSum(std::deque<int> d, int size)
{
    int sum = 0;
    for (int i = 0; i < size; ++i)
        sum += d[i];

    return sum;
}
