#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <memory>

int main(int argc, char const *argv[])
{

    int amountOfMemory;
    std::cout << "Enter the amount of memory to be allocated: ";
    std::cin >> amountOfMemory;

    // Smart pointers >> a safe way of allocating dynamic memory and handle the delete of it Automaticaly
    std::unique_ptr<int[]> ptr(new int[amountOfMemory]);
    // Note : 2 smart pointers can't have the same value to point to the same location. >> we use share pointers for that

    // int *ptr = (int *)malloc(amountOfMemory * sizeof(int));
    if (ptr != NULL)
    {
        for (int i = 0; i < amountOfMemory; i++)
        {
            std::cout << "Enter the " << i << " Element: ";
            std::cin >> ptr[i];
        }

        std::cout << "The Elements Entered : ";
        for (int i = 0; i < amountOfMemory; i++)
        {
            std::cout << ptr[i] << "  ";
        }
        std::cout << std::endl;

        // delete ptr;
    }
    return 0;
}
