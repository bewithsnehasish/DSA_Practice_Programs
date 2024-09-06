/* Single File Programming Question */
/**/
/* Problem Statement */
/**/
/**/
/**/
/**/
/* Sharukh needs to calculate the distance and midpoint of a line segment given its endpoints. Write a program to help Sharukh that reads the coordinates of two endpoints of a line segment, computes the distance between them, and finds the midpoint of the segment.  */
/**/
/* Input format : */
/**/
/* The first line contains the coordinates of the first endpoint as integers represented as x1 and y1. */
/**/
/* The second line contains the coordinates of the second endpoint as integers represented as x2 and y2. */
/**/
/* Output format : */
/**/
/* The first line prints "Distance: " followed by the distance between the two points, as a float value rounded to two decimal places. */
/**/
/* The second line prints"Midpoint: " followed by the midpoint coordinates, as float values rounded to two decimal places. */
/**/
/**/
/**/
/**/
/* Refer to the sample output for the exact format. */
/**/
/* Code constraints : */
/**/
/* In this scenario, the test cases fall under the following constraints: */
/**/
/* 0 ≤ x1, y1, x2, y2 ≤ 104 */
/**/
/* Sample test cases : */
/* Input 1 : */
/* 1 1 */
/* 2 2 */
/* Output 1 : */
/* Distance: 1.41 */
/* Midpoint: 1.50 1.50 */
/* Input 2 : */
/* 3 2 */
/* 4 1 */
/* Output 2 : */
/* Distance: 1.41 */
/* Midpoint: 3.50 1.50 */
/* Note : */
/* The program will be evaluated only after the “Submit Code” is clicked. */
/* Extra spaces and new line characters in the program output will result in the failure of the test case. */


#include <iostream>
#include <cmath>
#include <iomanip> // for std::setprecision
using namespace std;

struct Point {
    double x;
    double y;

    // Function to calculate distance between two points
    double calculateDistance(Point other) {
        return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
    }

    // Function to calculate midpoint between two points
    Point calculateMidpoint(Point other) {
        return { (x + other.x) / 2.0, (y + other.y) / 2.0 };
    }
};

int main() {
    // Step 1: Read input points
    Point p1, p2;
    cin >> p1.x >> p1.y;
    cin >> p2.x >> p2.y;

    // Step 2: Calculate distance
    double distance = p1.calculateDistance(p2);

    // Step 3: Calculate midpoint
    Point midpoint = p1.calculateMidpoint(p2);

    // Step 4: Output results
    cout << fixed << setprecision(2); // Set output precision to 2 decimal places
    cout << "Distance: " << distance << endl;
    cout << "Midpoint: " << midpoint.x << " " << midpoint.y << endl;

    return 0;
}
