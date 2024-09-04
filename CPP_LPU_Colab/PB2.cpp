/* Single File Programming Question */
/**/
/* Problem Statement */
/**/
/**/
/**/
/**/
/* Nial is developing a student information system. Create a class Input to store a student's name and roll number. In the main() function, read the student's details and display them. */
/**/
/* Input format : */
/**/
/* The first line of the input consists of a string, which represents the student's name. */
/**/
/* The second line of the input consists of an integer, which represents the roll number. */
/**/
/* Output format : */
/**/
/* The output prints "X: Y" where X is the student's name and Y is the roll number. */
/**/
/**/
/**/
/**/
/* Refer to the sample output for formatting specifications. */
/**/
/* Code constraints : */
/**/
/* The student name should be a non-empty string. */
/**/
/* The student roll number should be a non-negative integer. */
/**/
/* Sample test cases : */
/* Input 1 : */
/* Jane */
/* 158 */
/* Output 1 : */
/* 158: Jane */
/* Input 2 : */
/* John */
/* 8486 */
/* Output 2 : */
/* 8486: John */
/* Note : */
/* The program will be evaluated only after the “Submit Code” is clicked. */

/* Extra spaces and new line characters in the program output will result in the failure of the test case. */

#include <iostream>
#include <string>
using namespace std;

class Input {
public:
    string name;
    int rollNumber;
};

int main() {
    Input student;

    // Read student's name
    getline(cin, student.name);

    // Read student's roll number
    cin >> student.rollNumber;

    // Output in the specified format
    cout << student.rollNumber << ": " << student.name << endl;

    return 0;
}// You are using GCC


