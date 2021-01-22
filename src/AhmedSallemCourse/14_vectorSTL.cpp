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
#include <cstdint>

/* Prototypes */
uint16_t vecSum(std::vector<int> v, int size);

/**
 * @brief The entry function to the program
 * 
 * @return int status of the program return to the operating system [0 >> no error, -1 >> error]
 */
int main()
{
    // // Declaring a vector with Constructor
    // std::vector<int> v1(10);   // Make a vector with 10 int elements that all have an initialization value of 0 (heap)

    // for (int i = 0; i < v1.size(); i++)
    // {
    //     std::cout << v1[i] << " ";
    // }

    // std::cout << std::endl;

    // std::vector<int> v2(3, 7);   // Make a vector with 3 int elements that all have an initialization value of 7
    // for (int i = 0; i < v2.size(); i++)
    // {
    //     std::cout << v2[i] << " ";
    //     //std::cout << v2.at(i) << " ";   // Better way to access the elements of the vector v2.at(0) == v2[0]
    // }

    // std::cout << std::endl;

    // std::vector<int> v3{4, 5, 6, 7};   // Make a vector with 4 int elements that have an initialization value of the entered values
    // for (int i = 0; i < v3.size(); i++)
    // {
    //     std::cout << v3[i] << " ";
    // }

    // std::cout << std::endl;

    std::vector<int> x;   // Make a vector with 0 elements (without Constructor)

    for (int i = 0; i < 40; ++i)
    {
        x.push_back(i);   // add an element to the vec with the value of i (dynamic memory allocation)
    }

    std::cout << "the Sum of the " << x.size() << " element is : " << vecSum(x, x.size()) << std::endl;

    return 0;
}

/**
 * @brief this function is used to sum the elements of the vector 
 * 
 * @param v vector of elements
 * @param size size of the vector
 * @return uint16_t the sum 
 */
uint16_t vecSum(std::vector<int> v, int size)
{
    uint16_t sum = 0;
    for (int i = 0; i < size; ++i)
        sum += v[i];
    return sum;
}
