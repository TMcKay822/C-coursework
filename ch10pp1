/* Redefine CDAccount from Display 10.1 so that it is a class 
* rather than a structure. Use the same member variables as in 
* Display 10.1 but make them private. Include member functions 
* for each of the following: one to return the initial balance,
* one to return the balance at maturity, one to return the 
* interest rate, and one to return the term. Include a 
* constructor that sets all of the member variables to any 
* specified values, as well as a default constructor. 
* Embed your class definition in a test program.
* Author: Tiffany McKay
* Version: 11/11/2019

*/



//Program to demonstrate the CDAccount structure type. 

#include <iostream> 
using namespace std;

//Class for a bank certificate of deposit: 
class CDAccount 
{
    public: 
        //Constructors
        CDAccount(); //default constructor, sets values to zero
        CDAccount(double new_balance, double new_interest_rate, int new_term);

        //Member functions 
        double get_initial_balance() const; //accessor function
        double get_balance_at_maturity() const; //accessor function
        double get_interest_rate() const; //accessor function
        int get_term() const; //accessor function
        void input(istream& ins); 
        void output(ostream& outs);
            //Postcondition: the_account.balance and the_account.interest_rate 
            //have been given values 

    private: 
        double balance; 
        double interest_rate; //as percentage
        int term; //months until maturity 
};


int main()
{
    //Testing prorgam for previously entered values
    CDAccount account(100.00, 20.0, 8);
    account.output(cout);

    //Testing program for user entered values
    CDAccount acc; //creating CDAccount object
    cout << "Please enter the balance, interst rate (as percentage), " 
        << "and term (in months)" << endl; 
    acc.input(cin); 
    acc.output(cout); 

    return 0;
}

//Default constructor
CDAccount::CDAccount()
{
    balance = 0.0;
    interest_rate = 0.0;
    term = 0; 
}

CDAccount::CDAccount(double new_balance, double new_interest_rate, int new_term)
{
   balance = new_balance; 
   interest_rate = new_interest_rate; 
   term = new_term;
}

double CDAccount::get_initial_balance() const
{
    return balance; 
}
double CDAccount::get_balance_at_maturity() const
{
    double interest =  balance * (interest_rate/100.0) * (term/12.0) ;
    
    return balance + interest;  
}
double CDAccount::get_interest_rate() const
{
    return interest_rate; 
}
int CDAccount::get_term() const
{
    return term; 
}
void CDAccount::input(istream& ins)
{
    ins >> balance; 
    ins >> interest_rate;
    ins >> term;
}
void CDAccount::output(ostream& outs)
{
    //outputs data to the screen
    outs << "The initial balance was $ " << get_initial_balance() << endl; 
    outs << "The term was " << get_term() << " months" << endl; 
    outs << "The interest rate was " <<get_interest_rate() << "%" << endl; 
    outs << "New balance is $ " << get_balance_at_maturity() << " after " 
         << get_term()<< " months " << endl; 
    
}
