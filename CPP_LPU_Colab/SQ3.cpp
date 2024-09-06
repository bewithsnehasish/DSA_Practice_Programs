/*  Single File Programming Question */
/**/
/* Problem Statement */
/**/
/**/
/* You are developing a module for a text-processing application that will manipulate integers. The module should provide functionalities to set an integer, count the number of digits, find the number of odd digits, and calculate the sum of odd digits in the integer. */
/**/
/**/
/* You are tasked with implementing an IntegerManipulator class that performs various operations on a given integer. The class should provide methods to count the number of digits, find the number of odd digits, and calculate the sum of odd digits in the integer. */
/**/
/**/
/* Use a Non-inline member function. */
/**/
/**/
/* Note: This is a sample question asked in a mPhasis interview. */
/* Input format : */
/**/
/* The input consists of an integer n. */
/* Output format : */
/**/
/* The first line displays the number of digits in the number. */
/**/
/* The second line displays the number of odd digits in the integer. */
/**/
/**/
/* Refer to the sample output for formatting specifications. */
/* Code constraints : */
/**/
/* 1 ≤ n ≤ 109 */
/* Sample test cases : */
/* Input 1 : */
/**/
/* 1124 */
/**/
/* Output 1 : */
/**/
/* Number of digits: 4 */
/* Number of odd digits: 2 */
/**/
/* Input 2 : */
/**/
/* 2468 */
/**/
/* Output 2 : */
/**/
/* Number of digits: 4 */
/* Number of odd digits: 0 */


// You are using GCC
#include <iostream>

using namespace std;

class IntegerManipulator {
private:
    int number;

public:
    // Constructor to initialize the number
    IntegerManipulator(int n) : number(n) {}

    // Function to count the number of digits in the number
    int countDigits() const {
        int num = number;
        int count = 0;
        while (num > 0) {
            count++;
            num /= 10;
        }
        return count;
    }

    // Function to count the number of odd digits
    int countOddDigits() const {
        int num = number;
        int count = 0;
        while (num > 0) {
            int digit = num % 10;
            if (digit % 2 != 0) {
                count++;
            }
            num /= 10;
        }
        return count;
    }

    // Function to calculate the sum of odd digits
    int sumOddDigits() const {
        int num = number;
        int sum = 0;
        while (num > 0) {
            int digit = num % 10;
            if (digit % 2 != 0) {
                sum += digit;
            }
            num /= 10;
        }
        return sum;
    }
};

int main() {
    int n;
    cin >> n; // Read input integer
    
    IntegerManipulator manipulator(n);
    
    // Output the results
    cout << "Number of digits: " << manipulator.countDigits() << endl;
    cout << "Number of odd digits: " << manipulator.countOddDigits() << endl;
    
    return 0;
}
