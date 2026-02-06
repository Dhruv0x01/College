/*
Question 5:
Create a class BankAccount with data members: accNumber, name, balance.
• Add member functions openAccount(), deposit(), withdraw(),
and display().
• In main(), create one account object and perform a series of deposits and
withdrawals based on user choice (simple menu).
*/

#include <iostream>
using namespace std;

class BankAccount{
    private:
    int accNumber;
    string name;
    float balance;

    public:
    void openAccount(){
        cout << "Enter account number: ";
        cin >> accNumber;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter balance: ";
        cin >> balance;
    }
    void deposit(float a){
    if(a>0){
        balance += a;
        cout << "Amount deposited successfully." << endl;
    }else{
        cout << "Enter a valid amount";
    }
    }
    void withdraw(float b){
        if(b > balance){
            cout << "You can only withdraw " << balance;
        }else{
            balance -= b;
            cout << "Amount withdrawal successfully." << endl;
        }
    }
    void display(){
        cout << "\n--- Account Details ---\n";
        cout << "Account number: " << accNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main(){
    BankAccount bank;

    bank.openAccount();

    int choice;
    float amount;

do{
    cout << "\nMenu: " << endl;
    cout << "1. Deposits" << endl;
    cout << "2. Withdraws" << endl;
    cout << "3. Display Account" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice" << endl;
    cin >> choice;


    switch(choice){
        case 1:
        cout << "Enter the amount to deposit: ";
        cin >> amount;
        bank.deposit(amount);
        break;

        case 2:
        cout << "Enter the amount to withdraw: ";
        cin >> amount;
        bank.withdraw(amount);
        break;

        case 3:
        bank.display();
        break;

        case 4:
        cout << "Thank you for using the bank system" << endl;
        break;

        default:
        cout << "Invalid choice. Try again." << endl;
    }
    
    
}
while(choice != 4);

return 0;
}

    
    