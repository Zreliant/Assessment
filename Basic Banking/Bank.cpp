#include <iostream>
#include <string> // to use strings
#include <limits> // to stop the user from crashing the program
using namespace std;

void clearInput() { // stops users from entering a letter and crashing the program
    cin.clear(); // clears the errors
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignores the rest of the input buffer
}

int main() {
    double balance = 0.0; // Starting balance
    int choice; // will act as a menu choice
    double amount; // will act as a deposit and withdraw amount

    do { // will keep looping until user chooses to exit
        cout << "\n===== Simple Banking App =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        if (!(cin >> choice)) { // input validation for menu choice
            cout << "Invalid input. Please enter a number between 1 and 4.\n";
            clearInput();
            continue; // without the function the code breaks
        }

        switch (choice) {
        case 1: // shows the user's balance
            cout << "Your balance is: $" << balance << "\n";
            break;

        case 2: // allows the user to deposit money
            cout << "Enter amount to deposit: $";

            if (!(cin >> amount)) { // input validation for deposit amount
                cout << "Invalid input. Please enter a number between 1 and 4.\n";
                clearInput();
                continue; // without the function the code breaks
            }

            if (amount > 0) { // ensures the deposited amount is positive
                balance += amount; // add deposit to balance
                cout << "Deposited successfully!\n";
            } else {
                cout << "Invalid amount.\n";
            }
            break;

        case 3:
            cout << "Enter amount to withdraw: $";

            if (!(cin >> amount)) { // input validation for withdraw amount
                cout << "Invalid input. Please enter a number between 1 and 4.\n";
                clearInput();
                continue; // without the function the code breaks
            }

            if (amount > 0 && amount <= balance) { // checks if withdraw is less than or equal to balance
                balance -= amount; // remove withdraw from balance
                cout << "Withdrawal successful!\n";
            } else if (amount > balance) { // wont allow withdrawal if amount is greater than balance
                cout << "Not enough balance!\n";
            } else {
                cout << "Invalid amount.\n";
            }
            break;

        case 4:
            cout << "Thank you for using the banking app. Goodbye!\n";
            break;

        default:
            cout << "Invalid option. Try again.\n";
        }

    } while (choice != 4); // will keep looping until user chooses to exit

    return 0;
}
