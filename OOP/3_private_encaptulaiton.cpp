#include <iostream>
#include <string>
using namespace std;

class Account{
    private:
        int account_number;
        double balance;
    public:
        Account(int account_number,int balance) : account_number(account_number),balance(balance) {} ;
    
        string get_account_number(){
            return "Your Account Number is: " + to_string(account_number);
        }

        string get_balance(){
            return "Your Current Balance is: " + to_string(balance);
        }
};

int main(){
    Account obj1(12543675,30000);
    
    cout<< obj1.get_account_number() << endl;
    cout<< obj1.get_balance() << endl;

    return 0;
}