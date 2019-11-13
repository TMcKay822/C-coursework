/* Define a class for a type called CounterType. An object of this type is used
to count things, so it records a count that is a nonnegative whole number.
Include a default constructor that sets the counter to zero and a constructor
with one argument that sets the counter to the value specified by its argument.
Include member functions to increase the count by 1 and to decrease
the count by 1. Be sure that no member function allows the value of the
counter to become negative. Also, include a member function that returns
the current count value and one that outputs the count to a stream. The
member function for doing output will have one formal parameter of type
ostream for the output stream that receives the output. Embed your class
definition in a test program.

Author: Tiffany McKay 
Version: 11/13/2019
*/

#include <iostream> 
using namespace std; 


class CounterType
{
    public:
        CounterType();
        CounterType(int count);
        int incrementer(); //used to increase count by 1
        int decrementer(); //used to decrease count by 1
        int get_count(); 
        void input(istream& ins); 
        void output(ostream& outs); 

    private: 
    int count; 
};

CounterType::CounterType()
{
    count = 0; //default constructor 
}
CounterType::CounterType(int new_count)
{
    if (new_count < 0 ) //to exclude negative numbers
        new_count = 0; 
    else 
        count = new_count; 
}
//used to increase count by 1
int CounterType::incrementer() 
{
    return count++; 
}

//used to decrease count by 1
int CounterType::decrementer()
{
    if (count > 0) //used to exclude negative numbers 
    return count--; //used to decrease the count
}
int CounterType::get_count()
{
    return count; 
}
void CounterType::input(istream& ins)
{
    ins >> count; 
}
void CounterType::output(ostream& outs)
{
    outs << "Count is " << count <<endl;
}


int main ()
{

    //Testing the counter type and output function
    cout << "Please enter  a number to begin with. "; 
    CounterType a; 
    a.input(cin);
    a.output(cout);

    //Testing the incrementer member function
    cout << "Please increment count 5 times " << endl;
    for(int i=0; i< 5; i++)
    {
        a.incrementer(); //calling the incrementer function
    }
    a.output(cout); 

    ///Testing the decrementer function
    cout << "Please decrese the count by 3 " << endl;
    for(int i = 0; i < 3; i++)
    {
        a.decrementer(); //calling the decrementer function
    }
    a.output(cout); 

    return 0; 
}
