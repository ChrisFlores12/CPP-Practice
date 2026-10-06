#include<iostream>
#include<string>

using namespace std;

class Account{
    public:
        string name;
        int balance;

        int withdraw(int amount){
            balance = balance - amount;
            return balance;
        }
};


int main(){

    Account account1;
    account1.name = "Chris";
    account1.balance = 3000;

    cout << account1.name << " has a balance of $" << account1.balance << "\n" << endl;
    
    int withdrawAmount = 200;
    
    cout<< account1.name << " is withdrawing $" << account1.withdraw(200) << endl;
    cout<< "Remaning balance: $" << account1.balance << endl;

    return 0;
}