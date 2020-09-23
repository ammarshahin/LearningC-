/**
 * @file Week1Submission.cpp
 * @author Ammar Shahin (ammar0shahin@gmail.com)
 * @brief This file is the first week submission in the Cpp for C programers course 
 * @version 0.1
 * @date 2020-05-06
 * 
 * @copyright Copyright (c) 2020
 * 
 */

// Convert this program to C++

// change to C++ io

// change to one line comments

// change defines of constants to const

// change array to vector<>

// inline any short function

#include <iostream>
#include <vector>

const int N = 40;

void sum(int &p, int n, std::vector<int> d)
{
    for (int i = 0; i < n; i++)
        p += d[i];
}

int main()
{
    int accum = 0;
    std::vector<int> data;

    for (int i = 0; i < N; ++i)
        data.push_back(i);

    sum(accum, N, data);

    std::cout << "sum is " << accum << std::endl;
    return 0;
}