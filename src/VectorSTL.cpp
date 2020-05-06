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
    std::vector<int> x;
    int sum = 0;

    for (int i = 0; i < size; ++i)
        x.push_back(i);

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
