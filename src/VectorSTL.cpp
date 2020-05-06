#include <iostream>
#include <vector>

const int size = 40;

int arrSum(std::vector<int> v, int size);

int main()
{
    std::vector<int> x;
    int sum = 0;
    for (int i = 0; i < size; ++i)
        x.push_back(i);

    sum = arrSum(x, size);
    std::cout << "the Sum of the " << size << " element is : " << sum << std::endl;
}

int arrSum(std::vector<int> v, int size)
{
    int sum = 0;
    for (int i = 0; i < size; ++i)
        sum += v[i];
    return sum;
}