/* Single File Programming Question */
/**/
/* Problem Statement */
/**/
/**/
/**/
/**/
/* Cooper is learning about shapes and geometry. He wants to create a program that helps him calculate the area and perimeter of a rectangle. Implement a Rectangle class that takes the length and breadth as inputs and has attributes to store these values. In the main function, create an object of the Rectangle class, set the length and breadth, and then print out the area and perimeter of the rectangle. */
/**/
/* Input format : */
/**/
/* The input consists of two space-separated integers representing the length and breadth of a rectangle. */
/**/
/* Output format : */
/**/
/* The first line of output prints "Area: " followed by the area of the rectangle. */
/**/
/* The second line of output prints "Perimeter: " followed by the perimeter of the rectangle. */
/**/
/**/
/**/
/**/


/* Code constraints : */
/**/
/* In this scenario, the test cases fall under the following constraints: */
/**/
/* 1 ≤ length, breadth ≤ 100 */
/**/
/* Sample test cases : */
/* Input 1 : */
/* 10 20 */
/* Output 1 : */
/* Area: 200 */
/* Perimeter: 60 */
/* Input 2 : */
/* 14 18 */
/* Output 2 : */
/* Area: 252 */
/* Perimeter: 64 */
/* Note : */
/* The program will be evaluated only after the “Submit Code” is clicked. */
/* Extra spaces and new line characters in the program output will result in the failure of the test case. */


#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    // Constructor to initialize length and breadth
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // Function to calculate area
    int calculateArea() {
        return length * breadth;
    }

    // Function to calculate perimeter
    int calculatePerimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    int l, b;
    cin >> l >> b; // Input length and breadth of the rectangle

    Rectangle rect(l, b);

    // Calculate area and perimeter
    int area = rect.calculateArea();
    int perimeter = rect.calculatePerimeter();

    // Output in the specified format
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    return 0;
}// You are using GCC

