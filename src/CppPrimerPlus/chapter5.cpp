//! The Range-Based for Loop (C++11)

//* The C++11 adds a new form of loop called the range-based for loop. It simplifies one common loop task—that of doing something with each element of an array, or, more generally, of one of the container classes, such as vector or array. Here is an example:

double prices[5] = {4.99, 10.99, 6.87, 7.99, 8.49};
for (double x : prices)
    cout << x << std::endl;

//* Here x initially represents the first member of the prices array.After displaying the first element, the loop then cycles x to represent the remaining elements of the array in turn, so this code would print all five members, one per line. In short, this loop displays every value included in the range of the array.
//* To modify array values, you need a different syntax for the loop variable:

for (double &x : prices)
    x = x * 0.80;   //20% off sale

//* The & symbol identifies x as a reference variable

//* The range-based for loop also can be used with initialization lists:

for (int x : {3, 5, 2, 8, 6})
    cout << x << " ";

//! Summery:-

//* C++ offers three varieties of loops: for loops, while loops, and do while loops.A loop cycles through the same set of instructions repetitively, as long as the loop test condition evaluates to true or nonzero and the loop terminates execution when the test condition evaluates to false or zero.The for loop and the while loop are entry-condition loops, meaning that they examine the test condition before executing the statements in the body of the loop.The do while loop is an exit-condition loop, meaning that it examines the test condition after executing the statements in the body of the loop.

//*The syntax for each loop calls for the loop body to consist of a single statement. However, that statement can be a compound statement, or block, formed by enclosing several statements within paired curly braces.

//* Relational expressions, which compare two values, are often used as loop test conditions. Relational expressions are formed by using one of the six relational operators: <, <=, ==, >=, >, or !=. Relational expressions evaluate to the type bool values true and false.

//* Many programs read text input or text files character-by-character.The istream class provides several ways to do this. If ch is a type char variable, the following statement reads the next input character into ch: cin >> ch;

//* However, it skips over spaces, newlines, and tabs.The following member function call reads the next input character, regardless of its value, and places it in ch: cin.get(ch);

//* The member function call cin.get() returns the next input character, including spaces, newlines, and tabs, so it can be used as follows: ch = cin.get();

//* The cin.get(char) member function call reports encountering the EOF condition by returning a value with the bool conversion of false, whereas the cin.get() member function call reports the EOF by returning the value EOF, which is defined in the iostream file.

//* A nested loop is a loop within a loop.Nested loops provide a natural way to process two - dimensional arrays.
