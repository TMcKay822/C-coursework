/* Write a program that asks the user to input an integer named 
* numDoubles.
* Create a dynamic array that can store numDoubles doubles and 
* make a loop that allows the user to enter a double into each 
* array entry. 
* Loop through the array, calculate the average, and output it.
* Delete the memory allocated to your dynamic array before exiting. 
* Author: Tiffany McKay
* Verison: 10/17/2019 
*/
// Chapter 9 Practice Program 2

#include <iostream> 
using namespace std; 

int main()
{
    int numDoubles; 

    //Asks user for the number that should be in numDoubles
    cout << "Please enter the number of doubles you have. \n";
    cin >> numDoubles; //Receives the number of doubles the user would like

    double *p; //Creates a pointer that points to the dynamic array
    p = new double[numDoubles]; //Creates dynamic array of size numDoubles


    //Loop to read in the numbers for each index, entered by the user
    for(int i = 0; i<numDoubles; i++)
    {
        cout << "Please enter the double number for double number " << i+1 << endl; 
        cin >> p[i]; 
    }

    double average = 0.0, sum = 0.0; //decalres variables for the average calculation
    
    // Calculates the sum of the numbers entered, to be used in average calculation
    for (int i = 0; i < numDoubles; i++)
    {
        sum += p[i]; //sum = sum + number entered in list
    }

    //Calculates the average, which is sum divided by the number of items, in this case number of doubles
    average = sum / numDoubles; 

    //Prints the average and sum to the screen
    cout << "The sum of the numbers enetered is " << sum << endl; 
    cout << "The average of the numbers entered is: " << average << endl;

    delete [] p; //Deletes the dynamic array to free up space in freestore

    
    return 0; 


}
