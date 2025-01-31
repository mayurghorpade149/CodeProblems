// // /******************************************************************************
// //  Write a C++ program to implement a class called BankAccount that has private 
// //  member variables for account number and balance. Include member functions to 
// //  deposit and withdraw money from the account.
// // *******************************************************************************/
// // #include <iostream>
// // using namespace std;

// // class BankAccount {
// //     private:
// //         int accountNumber;
// //         double balance;
    
// //     public:
// //         // Constructor to initialize account number and balance
// //         BankAccount(int accNum, double initialBalance) {
// //             accountNumber = accNum;
// //             balance = initialBalance;
// //         }

// //         // Function to get the account number
// //         int getAccountNumber() {
// //             return accountNumber;
// //         }

// //         // Function to deposit money into the account
// //         void deposit(double amount) {
// //             if (amount > 0) {
// //                 balance += amount;
// //                 cout << "Deposit successful. New balance: $" << balance << endl;
// //             } else {
// //                 cout << "Invalid amount. Deposit failed." << endl;
// //             }
// //         }

// //         // Function to withdraw money from the account
// //         void withdraw(double amount) {
// //             if (amount > 0 && amount <= balance) {
// //                 balance -= amount;
// //                 cout << "Withdrawal successful. New balance: $" << balance << endl;
// //             } else {
// //                 cout << "Insufficient funds or invalid amount. Withdrawal failed." << endl;
// //             }
// //         }

// //         // Function to display the current balance
// //         void displayBalance() {
// //             cout << "Current balance: $" << balance << endl;
// //         }
// // };

// // // Function to check if the account number exists in the list
// // int findAccount(BankAccount accounts[], int size, int accNum) {
// //     for (int i = 0; i < size; i++) {
// //         if (accounts[i].getAccountNumber() == accNum) {
// //             return i; // Return index if account is found
// //         }
// //     }
// //     return -1; // Return -1 if account not found
// // }

// // int main() {
// //     // Array of BankAccount objects
// //     BankAccount accounts[] = {
// //         BankAccount(1001, 500.0),
// //         BankAccount(1002, 1500.0),
// //         BankAccount(1003, 2000.0)
// //     };
    
// //     int size = sizeof(accounts) / sizeof(accounts[0]);
// //     int enteredAccNum;
    
// //     // Input account number from the user
// //     cout << "Enter your account number: ";
// //     cin >> enteredAccNum;
    
// //     // Check if the account exists in the list
// //     int accountIndex = findAccount(accounts, size, enteredAccNum);
    
// //     if (accountIndex == -1) {
// //         cout << "Account not found." << endl;
// //     } else {
// //         int choice;
// //         double amount;
        
// //         cout << "Account found. Choose an option:\n1. Deposit\n2. Withdraw\n3. Display Balance\n";
// //         cin >> choice;
        
// //         switch (choice) {
// //             case 1:
// //                 // Deposit
// //                 cout << "Enter amount to deposit: ";
// //                 cin >> amount;
// //                 accounts[accountIndex].deposit(amount);
// //                 break;
                
// //             case 2:
// //                 // Withdraw
// //                 cout << "Enter amount to withdraw: ";
// //                 cin >> amount;
// //                 accounts[accountIndex].withdraw(amount);
// //                 break;
                
// //             case 3:
// //                 // Display balance
// //                 accounts[accountIndex].displayBalance();
// //                 break;
                
// //             default:
// //                 cout << "Invalid option." << endl;
// //                 break;
// //         }
// //     }
    
// //     return 0;
// // }
// #include <iostream>
// #include <vector>
// using namespace std;

// class BankAccount {
//     private:
//         int accountNumber;
//         double balance;
    
//     public:
//         // Constructor to initialize account number and balance
//         BankAccount(int accNum, double initialBalance) {
//             accountNumber = accNum;
//             balance = initialBalance;
//         }

//         // Function to get the account number
//         int getAccountNumber() {
//             return accountNumber;
//         }

//         // Function to deposit money into the account
//         void deposit(double amount) {
//             if (amount > 0) {
//                 balance += amount;
//                 cout << "Deposit successful. New balance: $" << balance << endl;
//             } else {
//                 cout << "Invalid amount. Deposit failed." << endl;
//             }
//         }

//         // Function to withdraw money from the account
//         void withdraw(double amount) {
//             if (amount > 0 && amount <= balance) {
//                 balance -= amount;
//                 cout << "Withdrawal successful. New balance: $" << balance << endl;
//             } else {
//                 cout << "Insufficient funds or invalid amount. Withdrawal failed." << endl;
//             }
//         }

//         // Function to display the current balance
//         void displayBalance() {
//             cout << "Current balance: $" << balance << endl;
//         }
// };

// // Function to check if the account number exists in the list
// int findAccount(vector<BankAccount> &accounts, int accNum) {
//     for (size_t i = 0; i < accounts.size(); i++) {
//         if (accounts[i].getAccountNumber() == accNum) {
//             return i; // Return index if account is found
//         }
//     }
//     return -1; // Return -1 if account not found
// }

// // Function to add a new account
// void addNewAccount(vector<BankAccount> &accounts, int accNum) {
//     double initialBalance;
//     cout << "Enter initial balance for the new account: ";
//     cin >> initialBalance;
    
//     // Create a new BankAccount and add it to the list
//     BankAccount newAccount(accNum, initialBalance);
//     accounts.push_back(newAccount);
//     cout << "New account created successfully." << endl;
// }

// int main() {
//     // List of BankAccount objects stored in a vector for dynamic resizing
//     vector<BankAccount> accounts = {
//         BankAccount(1001, 500.0),
//         BankAccount(1002, 1500.0),
//         BankAccount(1003, 2000.0)
//     };

//     int enteredAccNum;
    
//     // Input account number from the user
//     cout << "Enter your account number: ";
//     cin >> enteredAccNum;
    
//     // Check if the account exists in the list
//     int accountIndex = findAccount(accounts, enteredAccNum);
    
//     if (accountIndex == -1) {
//         char choice;
//         cout << "Account not found. Would you like to create a new account? (y/n): ";
//         cin >> choice;

//         if (choice == 'y' || choice == 'Y') {
//             addNewAccount(accounts, enteredAccNum);
//         } else {
//             cout << "Operation canceled. BYEEEEE" << endl;
//         }
//     } else {
//         int option;
//         double amount;

//         cout << "Account found. Choose an option:\n1. Deposit\n2. Withdraw\n3. Display Balance\n";
//         cin >> option;

//         switch (option) {
//             case 1:
//                 // Deposit
//                 cout << "Enter amount to deposit: ";
//                 cin >> amount;
//                 accounts[accountIndex].deposit(amount);
//                 break;
                
//             case 2:
//                 // Withdraw
//                 cout << "Enter amount to withdraw: ";
//                 cin >> amount;
//                 accounts[accountIndex].withdraw(amount);
//                 break;
                
//             case 3:
//                 // Display balance
//                 accounts[accountIndex].displayBalance();
//                 break;
                
//             default:
//                 cout << "Invalid option." << endl;
//                 break;
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

class BankAccount {
    private:
        int accountNumber;
        double balance;
    
    public:
        // Constructor to initialize account number and balance
        BankAccount(int accNum, double initialBalance) {
            accountNumber = accNum;
            balance = initialBalance;
        }

        // Function to get the account number
        int getAccountNumber() {
            return accountNumber;
        }

        // Function to deposit money into the account
        void deposit(double amount) {
            if (amount > 0) {
                balance += amount;
                cout << "Deposit successful. New balance: $" << balance << endl;
            } else {
                cout << "Invalid amount. Deposit failed." << endl;
            }
        }

        // Function to withdraw money from the account
        void withdraw(double amount) {
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Withdrawal successful. New balance: $" << balance << endl;
            } else {
                cout << "Insufficient funds or invalid amount. Withdrawal failed." << endl;
            }
        }

        // Function to display the current balance
        void displayBalance() {
            cout << "Current balance: $" << balance << endl;
        }
};

// Function to check if the account number exists in the list
int findAccount(vector<BankAccount> &accounts, int accNum) {
    for (size_t i = 0; i < accounts.size(); i++) {
        if (accounts[i].getAccountNumber() == accNum) {
            return i; // Return index if account is found
        }
    }
    return -1; // Return -1 if account not found
}

// Function to add a new account
void addNewAccount(vector<BankAccount> &accounts, int accNum) {
    double initialBalance;
    cout << "Enter initial balance for the new account: ";
    cin >> initialBalance;
    
    // Create a new BankAccount and add it to the list
    BankAccount newAccount(accNum, initialBalance);
    accounts.push_back(newAccount);
    cout << "New account created successfully." << endl;
}

int main() {
    // List of BankAccount objects stored in a vector for dynamic resizing
    vector<BankAccount> accounts = {
        BankAccount(1001, 500.0),
        BankAccount(1002, 1500.0),
        BankAccount(1003, 2000.0)
    };

    int enteredAccNum;
    
    // Input account number from the user
    cout << "Enter your account number: ";
    cin >> enteredAccNum;
    
    // Check if the account exists in the list
    int accountIndex = findAccount(accounts, enteredAccNum);
    
    if (accountIndex == -1) {
        char choice;
        cout << "Account not found. Would you like to create a new account? (y/n): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            addNewAccount(accounts, enteredAccNum);
            accountIndex = findAccount(accounts, enteredAccNum);  // Update the index after account creation
        } else {
            cout << "Operation canceled. BYEEEEE" << endl;
            return 0;
        }
    }
    
    // Loop to perform multiple activities
    int option;
    double amount;
    bool continueTransaction = true;
    
    while (continueTransaction) {
        cout << "\nAccount found. Choose an option:\n1. Deposit\n2. Withdraw\n3. Display Balance\n4. Exit\n";
        cin >> option;

        switch (option) {
            case 1:
                // Deposit
                cout << "Enter amount to deposit: ";
                cin >> amount;
                accounts[accountIndex].deposit(amount);
                break;
                
            case 2:
                // Withdraw
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                accounts[accountIndex].withdraw(amount);
                break;
                
            case 3:
                // Display balance
                accounts[accountIndex].displayBalance();
                break;
                
            case 4:
                // Exit the loop
                continueTransaction = false;
                cout << "Exiting... BYEEEEE" << endl;
                break;
                
            default:
                cout << "Invalid option. Please try again." << endl;
                break;
        }
    }

    return 0;
}

