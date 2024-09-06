/*  Single File Programming Question */
/**/
/* Problem Statement */
/**/
/**/
/* Alex is a math enthusiast who loves playing with numbers. One day, Alex came across a challenge to write a program that reverses a given number. Intrigued by the challenge, Alex decides to write a program using reference variables. */
/**/
/**/
/* Can you help Alex by creating a program that reverses the number using reference variables? */
/**/
/**/
/* Function Name: void reverseNumber */
/**/
/**/
/* Note: This is a sample question asked in a HCL interview. */
/* Input format : */
/**/
/* The input consists of a positive integer N. */
/* Output format : */
/**/
/* The output displays the reversed number of N. */
/* Code constraints : */
/**/
/* 1 ≤ N ≤ 107 */
/* Sample test cases : */
/* Input 1 : */
/**/
/* 157 */
/**/
/* Output 1 : */
/**/
/* 751 */
/**/
/* Input 2 : */
/**/
/* 120 */
/**/
/* Output 2 : */
/**/
/* 21 */

// You are using GCC
#include <iostream>

using namespace std;

// Function to reverse the digits of a number
void reverseNumber(int &num) {
    int reversed = 0;
    while (num > 0) {
        int digit = num % 10; // Get the last digit
        reversed = reversed * 10 + digit; // Append digit to reversed number
        num /= 10; // Remove the last digit from num
    }
    num = reversed; // Update the original number with the reversed number
}

int main() {
    int number;
    cin >> number; // Read the input number
    
    reverseNumber(number); // Reverse the number
    
    cout << number << endl; // Print the reversed number
    
    return 0;
}

