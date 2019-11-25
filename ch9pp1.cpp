/* 
* In the C programming language there is no pass-by-reference
* syntax to pass a variable by reference to a function. 
* Instead a variable is passed by pointer (just to be confusing,
* sometimes passing by pointer is referred to as pass by
* reference). 

* This Practice Program asks you to do the same thing as C, 
* which in practice would be simpler to implement using C++’s
* reference parameter syntax. Here is the header for a 
* function that takes as input a pointer to an integer:
    void addOne(int *ptrNum)

* Complete the function so it adds one to the integer referenced 
* by ptrNum. Write a main function where an integer variable is 
* defined, give it an initial value, call addOne, and output 
* the variable. It should be incremented by 1.

* Author: Tiffany McKay
* Verison: 10/17/2019 
*/


#include <iostream> 
using namespace std; 


void addOne(int *ptrNum); 


void addOne(int *ptrNum)
{
    *ptrNum +=1;
} 

int main()
{
    int newNum = 40;
    //before calling the addOne function
    cout << "The value before addition is: " << newNum << endl; 
    addOne(&newNum);
    //after calling the addOne function
    cout << "The new value after addition is: " << newNum << endl; 
    return 0; 
}

