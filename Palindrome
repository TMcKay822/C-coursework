/* Complete the function isPalindrome so that it returns
* true if the string cstr is a palindrome (the same backwards
* as forwards) and false if it is not. The function
* uses the cstring library. 

* Author: Tiffany McKay
* Verison: 10/17/2019 
*/

#include <iostream>
#include <cstring>
using namespace std; 


bool isPalindrome(char* cstr)
{
    char* front = cstr; //front is a pointer, pointing to same location that cstr is pointing to
    char* back = cstr + strlen(cstr)-1; //points to the rear
    while (front < back)
    {
    // Complete code here
        front++;
        back--; 

        if(*front != *back)
           { 
               cout << "Not palindrome!" << endl; 
                return false; 
           }
    }
   
    cout << "Palindrome" <<endl;
    return true;

}


int main()
{
    char s1[50] = "neveroddoreven";
    char s2[50] = "not a palindrome";
    cout << isPalindrome(s1) << endl; // true
    cout << isPalindrome(s2) << endl; // false
    return 0;
}
