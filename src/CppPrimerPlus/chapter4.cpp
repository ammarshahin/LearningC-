//* Arrays, structures, and pointers are three C++ compound types.An array can hold several values, all of the same type, in a single data object. By using an index, or subscript, you can access the individual elements in an array.

//* A structure can hold several values of different types in a single data object, and you can use the membership operator (.) to access individual members.The first step in using structures is to create a structure template that defines what members the structure holds. The name, or tag, for this template then becomes a new type identifier.You can then declare structure variables of that type.

//* A union can hold a single value, but it can be of a variety of types, with the member name indicating which mode is being used.

//* Pointers are variables that are designed to hold addresses.We say a pointer points to the address it holds.The pointer declaration always states to what type of object a pointer points.Applying the dereferencing operator (*) to a pointer yields the value at the location to which the pointer points.

//* A string is a series of characters terminated by a null character.A string can be represented by a quoted string constant, in which case the null character is implicitly understood.You can store a string in an array of char, and you can represent a string with a pointer-to-char that is initialized to point to the string.The strlen() function returns the length of a string, not counting the null character.The strcpy() function copies a string from one location to another.When using these functions, you include the cstring or the string.h header file.

//* The C++ string class, supported by the string header file, offers an alternative, more user-friendly means to deal with strings. In particular, string objects are automatically resized to accommodate stored strings, and you can use the assignment operator to copy a string.

//* The new operator lets you request memory for a data object while a program is running.The operator returns the address of the memory it obtains, and you can assign that address to a pointer.The only means to access that memory is to use the pointer. If the data object is a simple variable, you can use the dereferencing operator (*) to indicate a value. If the data object is an array, you can use the pointer as if it were an array name to access the elements. If the data object is a structure, you can use the pointer dereferencing operator (->) to access structure members.

//* Pointers and arrays are closely connected. If ar is an array name, then the expression ar[i] is interpreted as *(ar + i), with the array name interpreted as the address of the first element of the array.Thus, the array name plays the same role as a pointer. In turn, you can use a pointer name with array notation to access elements in an array allocated by new.

//* The new and delete operators let you explicitly control when data objects are allocated and when they are returned to the memory pool.Automatic variables, which are those declared within a function, and static variables, which are defined outside a function or with the keyword static, are less flexible.An automatic variable comes into beingChapter Review 191 when the block containing it (typically a function definition) is entered, and it expires when the block is left.A static variable persists for the duration of a program.

//* The StandardTemplate Library (STL), added by the C++98 standard, provides a vector template class that provides an alternative to do-it-yourself dynamic arrays. C++11 provides an array template class that offers an alternative to fixed-sized built-in arrays.

#include <iostream>
#include <cstdlib>
#include <string>

int main(int argc, char const *argv[])
{
#if 0
    char arr1[10];
    char arr2[10];
    std::cin.get(arr1, 10).get();
    std::cin.get(arr2, 10).get();
    std::cout << arr1 << std::endl;
    std::cout << arr2;
#else
    std::string str;

    //std::cin >> str;
    //std::cout << str << std::endl;
    getline(std::cin, str);
    std::cout << str << std::endl;

#endif

    return 0;
}

//! Ex: anynomnous union
//*
struct widget
{
    char brand[20];
    int type;
    union   // anonymous union
    {
        long id_num;        // type 1 widgets
        char id_char[20];   // other widgets
    };
};

widget prize;

if (prize.type == 1)
    cin >>
        prize.id_num;
else
    cin >> prize.id_char;

//* Because the union is anonymous, id_num and id_char are treated as two members of prize that share the same address.The need for an intermediate identifier id_val is eliminated. It is up to the programmer to keep track of which choice is active.