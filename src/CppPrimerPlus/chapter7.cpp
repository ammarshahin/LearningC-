//! Summary

//* Functions are the C++ programming modules.To use a function, you need to provide a definition and a prototype, and you have to use a function call.The function definition is the code that implements what the function does.The function prototype describes the function interface: how many and what kinds of values to pass to the function and what sort of return type, if any, to get from it.The function call causes the program to pass the function arguments to the function and to transfer program execution to the function code.

//* By default, C++ functions pass arguments by value.This means that the formal parameters in the function definition are new variables that are initialized to the values provided by the function call.Thus, C++ functions protect the integrity of the original data by working with copies.

//* C++ treats an array name argument as the address of the first element of the array. Technically, this is still passing by value because the pointer is a copy of the original address, but the function uses the pointer to access the contents of the original array. When you declare formal parameters for a function (and only then), the following two declarations are equivalent:
typeName arr[];
typeName *arr;

//* Both of these mean that arr is a pointer to typeName.When you write the function code, however, you can use arr as if it were an array name in order to access elements: arr[i]. Even when passing pointers, you can preserve the integrity of the original data by declaring the formal argument to be a pointer to a const type. Because passing the372 Chapter 7 Functions: C++’s Programming Modules address of an array conveys no information about the size of the array, you normally pass the array size as a separate argument.Alternatively, you can pass pointers to the beginning of the array and to one position past the end to indicate a range, as do the algorithms in the STL.

//* C++ provides three ways to represent C-style strings: by using a character array, a string constant, or a pointer to a string.All are type char* (pointer-to-char), so they are passed to a function as a type char* argument. C++ uses the null character (\0) to terminate strings, and string functions test for the null character to determine the end of any string they are processing.

//* C++ also provides the string class to represent strings.A function can accept string objects as arguments and use a string object as a return value.The string class size() method can be used to determine the length of a stored string.

//* C++ treats structures the same as basic types, meaning that you can pass them by value and use them as function return types. However, if a structure is large, it might be more efficient to pass a pointer to the structure and let the function work with the original data.These same considerations apply to class objects.

//* A C++ function can be recursive; that is, the code for a particular function can include a call of itself. The name of a C++ function acts as the address of the function. By using a function argument that is a pointer to a function, you can pass to a function the name of a second function that you want the first function to evoke.