/*  Single File Programming Question */
/**/
/* Problem Statement */
/**/
/**/
/* You are working on a program that needs to display decimal numbers with a specific formatting pattern. The pattern includes printing decimal numbers from 0.1 to n with three spaces in between each number. */
/**/
/**/
/* Write a program that takes an integer n as input and displays decimal numbers in the format 0.1, 0.2, 0.3, and so on, up to n numbers, with three spaces in between each number. */
/**/
/**/
/* Note: Use the manipulator function setw() for the spacings. */
/* Input format : */
/**/
/* The input consists of an integer n. */
/* Output format : */
/**/
/* The output prints n decimal numbers, each displayed in the described format with three spaces (use setw(3) for spacings) in between each number. */
/* Code constraints : */
/**/
/* 1 < n < 100 */
/* Sample test cases : */
/* Input 1 : */
/**/
/* 5 */
/**/
/* Output 1 : */
/**/
/* 0.1 0.2 0.3 0.4 0.5 */
/**/
/* Input 2 : */
/**/
/* 7 */
/**/
/* Output 2 : */
/**/
/* 0.1 0.2 0.3 0.4 0.5 0.6 0.7 */
/**/
/* Input 3 : */
/**/
/* 11 */
/**/
/* Output 3 : */
/**/
/* 0.1 0.2 0.3 0.4 0.5 0.6 0.7 0.8 0.9 0.10 0.11 */

#include <iostream>
#include <iomanip> // For setw()

using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; ++i) {
        // Print the decimal number with 1 digit precision and space formatting
        cout << fixed << setprecision(1) << setw(4) << (i * 0.1);
        
        // Print space if it's not the last number
        if (i != n) {
            cout << " ";
        }
    }
    cout << endl; // Ensure the output ends with a newline
    
    return 0;
}

