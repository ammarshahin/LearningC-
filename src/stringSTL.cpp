/**
 * @file stringSTL.cpp
 * 
 * @author Ammar Shahin (ammar0shahin@gmail.com)
 * 
 * @brief This file is to explore the string  standard library
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
#include <string>

/**
 * @brief The entry function to the program
 * 
 * @return int status of the program return to the operating system [0 >> no error, -1 >> error]
 */
int main()
{
    std::string str1 = ("Hello World!!!"); // constructor initialization 
    std::cout << str1 << std::endl;

    std::string str2; // Empty string
    std::cout << str2 << std::endl; // garpage


    return 0;
}