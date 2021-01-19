/**
 * @file VectorSTL.cpp
 * @author Ammar Shahin (ammar0shahin@gmail.com)
 * @brief This file is to explore the vector standard library
 * @version v1
 * @date 2020-05-06
 * 
 * @copyright Copyright (c) 2020
 * 
 */

/************************************************************/
/********************** INCLUDES ****************************/
/************************************************************/
#include <iostream>
#include <vector>

/* Const variabel size */
const int size = 40;

/* Prototypes */
int vecSum(std::vector<int> v, int size);

/**
 * @brief The entry function to the program
 * 
 * @return int status of the program return to the operating system [0 >> no error, -1 >> error]
 */
int main()
{
    // Declaring a vector with Constructor
    std::vector<int> v1(10); // Make a vector with 10 int elements that have an initialization value of 0 (heap)
    std::cout << v1[0] << " " << v1[4] << std::endl;

    std::vector<int> v2(3, 7); // Make a vector with 3 int elements that have an initialization value of 7
    std::cout << v2[0] << " " << v2[1] << std::endl;

    std::vector<int> v3{4, 5, 6, 7}; // Make a vector with 4 int elements that have an initialization value of the entered values
    std::cout << v3[0] << " " << v3[1] << std::endl;

    std::cout << v3.size() << std::endl; // return the size of the vector

    std::cout << v2.at(0) << std::endl; // Better way to access the elements of the vector v2.at(0) == v2[0]

/* 
 * ex: 
 *
 */
    std::vector<int> x; // Make a vector with 0 elements (without Constructor)
    int sum = 0;

    for (int i = 0; i < size; ++i)
        x.push_back(i); // add an element to the vec with the value of i (dynamic memory allocation)

    sum = vecSum(x, size);
    std::cout << "the Sum of the " << size << " element is : " << sum << std::endl;
}

/**
 * @brief this function is used to sum the elements of the vector 
 * 
 * @param v vector of elements
 * @param size size of the vector
 * @return int the sum 
 */
int vecSum(std::vector<int> v, int size)
{
    int sum = 0;
    for (int i = 0; i < size; ++i)
        sum += v[i];
    return sum;
}
