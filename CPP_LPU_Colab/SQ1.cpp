/*  Single File Programming Question */
/**/
/* Problem Statement */
/**/
/**/
/* Guna is developing a banking application that allows customers to deposit money into their accounts. The bank provides each customer with an initial balance of 50 rupees. To facilitate the deposit process, Guna has created a class called AddAmount. */
/**/
/**/
/* This class represents a transaction to add a specific amount of money to a customer's account. After the transaction is completed, the total amount in the customer's account is printed. */
/* Input format : */
/**/
/* The input consists of a single integer, representing the additional amount to be deposited into the customer's account (the deposit amount). */
/* Output format : */
/**/
/* The output displays the total amount in the customer's account after the deposit. */
/**/
/**/
/* Refer to the sample output for formatting specifications. */
/* Code constraints : */
/**/
/* The input deposit amount is a non-negative integer. */
/* Sample test cases : */
/* Input 1 : */
/**/
/* 400 */
/**/
/* Output 1 : */
/**/
/* 450 */
/**/
/* Input 2 : */
/**/
/* 250 */
/**/
/* Output 2 : */
/**/
/* 300 */
/**/

// You are using GCC
#include <iostream>
using namespace std;

class AddAmount {
private:
    int balance;

public:
    // Constructor to initialize the balance
    AddAmount() : balance(50) {}

    // Method to deposit an amount
    void deposit(int amount) {
        balance += amount;
    }

    // Method to display the total amount in the account
    int getTotalAmount() const {
        return balance;
    }
};

int main() {
    int depositAmount;
    
    // Read the deposit amount from the input
    cin >> depositAmount;
    
    // Create an instance of AddAmount
    AddAmount account;
    
    // Deposit the amount
    account.deposit(depositAmount);
    
    // Print the total amount in the account after the deposit
    cout << account.getTotalAmount() << endl;
    
    return 0;
}

