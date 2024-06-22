/**
 * @file stringSTL.cpp
 *
 * @author Ammar Shahin (ammar0shahin@gmail.com)
 *
 * @brief This file is to explore the string standard library
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
#include <cstdint>
#include <string>

/**
 * @brief The entry function to the program
 *
 * @return int status of the program return to the operating system [0 >> no error, -1 >> error]
 */
int main()
{
    std::string str1 = "Hello ";   // constructor initialization
    std::cout << str1 << std::endl;

    std::string str2;                 // Empty string (garbage)
    std::cout << str2 << std::endl;   // nothing will be printed
    str2 = "Ammar Shahin";

    std::cout << str1 << str2 << std::endl;

    str1 += str2;   // == str1.append(str2) >> concatenate the 2 strings(str1 = str1 + str2) [overloading]

    std::cout << str1 << std::endl;

    int size = str1.size();    // Return the size of the string (the count of the letters without the null terminator)
    int len = str1.length();   // Same as .size() method
    std::cout << size << " " << len << std::endl;

    std::string str3, str4;
    // std::cin >> str3;   // Will get the first word in the line terminal only and ignore the rest
    std::getline(std::cin, str4);   // Will get the entire line(with spaces) and set it into str4

    std::cout << str3 << std::endl
              << str4 << std::endl;

    return 0;
}