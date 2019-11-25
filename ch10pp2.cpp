/* Redo your definition of the class CDAccount from Practice 
Program 1 so that it has the same interface but a different 
implementation. The new implementation is in many ways similar 
to the second implementation for the class BankAccount given
in Display 10.7. Your new implementation for the class 
CDAccount will record the balance as two values of type int: 
one for the dollars and one for the cents. 
The member variable for the interest rate will store the 
interest rate as a fraction rather than as a percentage. 
For example, an interest rate of 4.3% will be stored as 
the value 0.043 of type double. 
Store the term in the same way as in Display 10.1.

Author: Tiffany McKay 
Version: 11/13/2019
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
        int dollars; 
        int cents; 
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
    dollars = 0; 
    cents = 0; 
    interest_rate = 0.0;
    term = 0; 
}

CDAccount::CDAccount(double new_balance, double new_interest_rate, int new_term)
{
   interest_rate = new_interest_rate; 
   term = new_term;
   dollars = (int) new_balance;
   cents = (int) ((new_balance - dollars ) * 100 ); 
}

double CDAccount::get_initial_balance() const
{
    return dollars + (double) cents/100.0; 
}
double CDAccount::get_balance_at_maturity() const
{
    double interest =  (dollars + cents/100.0) * (interest_rate/100.0) * (term/12.0) ;
    
    return get_initial_balance() + interest;  
}
double CDAccount::get_interest_rate() const
{
    return interest_rate / 100.0; 
}
int CDAccount::get_term() const
{
    return term; 
}
void CDAccount::input(istream& ins)
{
    ins >> dollars;
    ins >> cents;  
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
