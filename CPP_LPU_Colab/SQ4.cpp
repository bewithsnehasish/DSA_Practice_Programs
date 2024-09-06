/*  Single File Programming Question */
/**/
/* Problem Statement */
/**/
/**/
/* Shabu works at a library and needs to analyze the frequency of digits in identification numbers. Help Shabu by writing a program that counts how many times each digit (0-9) appears in a given number. The output should use the setw manipulator function for formatting. */
/**/
/**/
/* Note: Make the width length as 2. */
/* Input format : */
/**/
/* The input consists of an integer N, representing the identification number. */
/* Output format : */
/**/
/* For each digit (0-9) that appears in the number, output the digit and the number of times it appears, formatted with a width of 2 for the count. */
/**/
/**/
/* The output should be in the format: "Digit X: Y times", where X is the digit and Y is its count. */
/**/
/**/
/* Refer to the sample outputs for the formatting specifications. */
/* Code constraints : */
/**/
/* 102 ≤ N ≤ 109 */
/* Sample test cases : */
/* Input 1 : */
/**/
/* 12312 */
/**/
/* Output 1 : */
/**/
/* Digit 1:  2 times */
/* Digit 2:  2 times */
/* Digit 3:  1 times */
/**/
/* Input 2 : */
/**/
/* 123 */
/**/
/* Output 2 : */
/**/
/* Digit 1:  1 times */
/* Digit 2:  1 times */
/* Digit 3:  1 times */
/**/
/* Input 3 : */
/**/
/* 900 */
/**/
/* Output 3 : */
/**/
/* Digit 0:  2 times */
/* Digit 9:  1 times */
/**/


#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int number;
    cin >> number; // Read the input number

    // Array to store the frequency of digits 0-9
    int digitCount[10] = {0};
    
    // Count the frequency of each digit
    while (number > 0) {
        int digit = number % 10; // Extract the last digit
        digitCount[digit]++; // Increment the count for this digit
        number /= 10; // Remove the last digit from the number
    }

    for (int digit = 0; digit < 10; ++digit) {
        if (digitCount[digit] > 0) {
            cout << "Digit " << digit << ": " << setw(2) << digitCount[digit] << " times" << endl;
        }
    }
    
    return 0;
}

