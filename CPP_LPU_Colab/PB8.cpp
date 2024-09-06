/*  Single File Programming Question */
/**/
/* Problem Statement */
/**/
/**/
/* Reshma is fascinated by special numbers and wants to explore the concept of Armstrong numbers. An Armstrong number (also known as a narcissistic number) is a number that is equal to the sum of its own digits each raised to the power of the number of digits. Reshma also wants to find the factors of an Armstrong number if it is identified as one. */
/**/
/**/
/* Your task is to help Reshma by writing a program that takes an integer as input, checks if it is an Armstrong number, and if so, prints all its factors. The program should use inline functions to perform these tasks. */
/**/
/**/
/* Function specifications:﻿ */
/**/
/* inline bool isArmstrong(int ) - This calculates whether the given number is an Armstrong number or not. */
/**/
/* inline void printFactors(int ) - This prints the factors of the given number. */
/**/
/**/
/* Note: This is a sample question that can be asked in a TCS recruitment. */
/* Input format : */
/**/
/* The input consists of an integer, n. */
/* Output format : */
/**/
/* If the number is an Armstrong number, print: "[n] is an Armstrong number". */
/**/
/* The second line prints the factors of the number, separated by space. */
/**/
/**/
/* If the number is not an Armstrong number, print: "[n] is not an Armstrong number". */
/**/
/**/
/* Refer to the sample outputs for the formatting specifications. */
/* Code constraints : */
/**/
/* 100 ≤ n ≤ 104 */
/* Sample test cases : */
/* Input 1 : */
/**/
/* 409 */
/**/
/* Output 1 : */
/**/
/* 409 is not an Armstrong number */
/**/
/* Input 2 : */
/**/
/* 153 */
/**/
/* Output 2 : */
/**/
/* 153 is an Armstrong number */
/* 1 3 9 17 51 153  */
/**/

#include <iostream>
#include <cmath> // For pow() function
using namespace std;

// Inline function to check if the number is an Armstrong number
inline bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int numDigits = 0;
    
    // Count the number of digits
    while (num > 0) {
        num /= 10;
        ++numDigits;
    }
    
    num = originalNum;
    
    // Calculate the sum of digits each raised to the power of the number of digits
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }
    
    // Check if the sum is equal to the original number
    return sum == originalNum;
}

// Inline function to print the factors of the number
inline void printFactors(int num) {
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
}

int main() {
    int n;
    cin >> n;
    
    // Check if the number is an Armstrong number
    if (isArmstrong(n)) {
        cout << n << " is an Armstrong number" << endl;
        printFactors(n);
    } else {
        cout << n << " is not an Armstrong number" << endl;
    }
    
    return 0;
}

