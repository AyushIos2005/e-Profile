#include <iostream>
using namespace std;

int balance = 1000;
int pin = 2005;
 
int give(){
    cout<<"Your Transaction is being Cancel"<<endl<<"Please try again later"<<endl;
    return 0;
}

void checkBalance() {
    cout << "Your current balance is: " << balance << endl;
}

void deposit() {
    int amount;
    cout << "Enter amount to deposit: "<<endl;
    cin >> amount;
    if (amount > 0) {
        balance += amount;
        cout << "Amount deposited successfully."<<endl<<"Collect Your Card"<<endl;
    } else {
        cout << "Invalid amount."<<endl;
    }
}

void withdraw() {
    int amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    if (amount > balance) {
        cout << "Insufficient balance."<<endl;
    } else if (amount <= 0) {
        cout << "Enter valid amount."<<endl;
        give();
    } else {
        balance -= amount;
        
        cout <<"Your Transaction is being Processed"<<endl;
        cout << "Please collect your cash."<<endl;
    }
    }

void changePin() {
    int oldPin, newPin;
    cout << "Enter current PIN: ";
    cin >> oldPin;
    if (oldPin == pin) {
        cout << "Enter new PIN: ";
        cin >> newPin;
        pin = newPin;
        cout << "PIN changed successfully."<<endl;
    } else {
        cout << "Incorrect PIN."<<endl;
    }
}

int main() {
    int enteredPin;
    cout << "Enter your secret number : ";
    cin >> enteredPin;

    if (enteredPin != pin) {
        cout << "Invalid PIN. Access denied."<<endl;
        return 0;
    }
    while(1){
    int choice;
        cout << "\n\t\t\t SELECT MENU \n";
        cout << "\t 1. Check Balance "<<"\t"<<"2. Deposit Money\n";
        cout << "\t 3. Withdraw Money"<<"\t"<<"4. Change PIN\n";
        cout << "\t\t\t 5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                changePin();
                break;
            case 5:
                cout << "Thank you for using the ATM!\n";
                exit(0);
                break;
            default:
                cout << "Invalid choice.\n";
        }
    }
    
    return 0;
}
