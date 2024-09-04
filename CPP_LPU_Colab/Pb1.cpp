/* Single File Programming Question */
/**/
/* Problem Statement */
/**/
/**/
/**/
/**/
/* A grand trade fair event organized by the Confederation of National Large-Scale Industry saw varying attendance over three days. */
/**/
/**/
/**/
/**/
/* On the first day, x people attended. On the second day, the number doubled to 2x. Due to heavy rains on the third day, attendance dropped to half of the first day's number, x/2. */
/**/
/**/
/**/
/**/
/* Given the total attendance for the first three days, find the number of people who attended each day: days 1, 2, and 3. */
/**/
/* Input format : */
/**/
/* The input consists of an integer N, corresponding to the total number of people. */
/**/
/* Output format : */
/**/
/* The first line displays the number of attendees on day 1 as an integer value. */
/**/
/* The second line displays the number of attendees on day 2 as an integer value. */
/**/
/* The third line displays the number of attendees on day 3 as an integer value. */
/**/
/**/
/**/
/**/
/* Refer to the sample input and output for the exact text and format. */
/**/
/* Code constraints : */
/**/
/* In this scenario, the test cases fall under the following constraints: */
/**/
/* 1000 ≤ N ≤ 105﻿ */
/**/
/* Sample test cases : */
/* Input 1 : */
/* 10500 */
/* Output 1 : */
/* Number of attendees on day 1: 3000 */
/* Number of attendees on day 2: 6000 */
/* Number of attendees on day 3: 1500 */
/* Input 2 : */
/* 7000 */
/* Output 2 : */
/* Number of attendees on day 1: 2000 */
/* Number of attendees on day 2: 4000 */
/* Number of attendees on day 3: 1000 */
/* Note : */
/* The program will be evaluated only after the “Submit Code” is clicked. */
/* Extra spaces and new line characters in the program output will result in the failure of the test case. */
/**/
/* solve in cpp */

#include <iostream>
using namespace std;

int main() {
    int N; // Total attendance
    cin >> N;
    
    // Calculate the number of attendees on each day
    int day1 = (2 * N) / 7;
    int day2 = 2 * day1;
    int day3 = day1 / 2;
    
    // Print the results
    cout << "Number of attendees on day 1: " << day1 << endl;
    cout << "Number of attendees on day 2: " << day2 << endl;
    cout << "Number of attendees on day 3: " << day3 << endl;
    
    return 0;

}

