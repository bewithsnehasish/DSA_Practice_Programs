/* ingle File Programming Question */
/**/
/* Problem Statement */
/**/
/**/
/* You are tasked with developing a program for a Math competition. One of the challenges in the competition requires participants to find the sum of the squares of the first n even numbers and odd numbers. */
/**/
/**/
/* Write a program that uses an inline function to calculate the sum of the squares of the first n even and odd numbers. The program should take an input value of n from the user and output the result. You need to implement the necessary functions and ensure that the program handles the computation accurately. */
/**/
/**/
/* Function specifications: */
/**/
/**/
/* inline int sumOfSquaresEven - calculates the sum of squares of the first n even numbers */
/**/
/* inline int sumOfSquaresOdd - calculates the sum of squares of the first n odd numbers */
/**/
/**/
/* Note: This is a sample question asked in Accenture recruitment. */
/* Input format : */
/**/
/* The input consists of a positive integer N. */
/* Output format : */
/**/
/* The first line displays an integer, representing the sum of squares of the first N even numbers. */
/**/
/* The second line displays an integer, representing the sum of squares of the first N odd numbers. */
/**/
/**/
/* Refer to the sample output for the formatting specifications. */
/* Code constraints : */
/**/
/* 1 ≤ N ≤ 30 */
/* Sample test cases : */
/* Input 1 : */
/**/
/* 3 */
/**/
/* Output 1 : */
/**/
/* 56 */
/* 35 */
/**/
/**/


#include <iostream>
using namespace std;

// Inline function to calculate the sum of squares of the first n even numbers
inline int sumOfSquaresEven(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        int evenNumber = 2 * i;
        sum += evenNumber * evenNumber;
    }
    return sum;
}

// Inline function to calculate the sum of squares of the first n odd numbers
inline int sumOfSquaresOdd(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        int oddNumber = 2 * i - 1;
        sum += oddNumber * oddNumber;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    
    // Calculate and print the sum of squares of the first n even numbers
    cout << sumOfSquaresEven(n) << endl;
    
    // Calculate and print the sum of squares of the first n odd numbers
    cout << sumOfSquaresOdd(n) << endl;
    
    return 0;
}

