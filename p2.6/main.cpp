/*
 •• Business P2.6
 The following pseudocode describes how to turn a string containing a ten-digit phone number (such as "4155551212") into a more readable string with parentheses and dashes, like this: "(415) 555-1212".
 
 Take the substring consisting of the first three characters and surround it with "(" and ")". This is the area code.
 Concatenate the area code, the substring consisting of the next three characters, a hyphen, and the substring consisting of the last four characters. This is the formatted number.
 Translate this pseudocode into a C++ program that reads a telephone number into a string variable, computes the formatted number, and prints it.
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter a ten-digit phone number without dashes or paranthesis: ";
    string number;
    cin >> number;
    
    string first_part = number.substr(0, 3);
    string second_part = number.substr(3, 3);
    string third_part = number.substr(6, 4);
    
    cout << endl << "(" << first_part+ ")" +second_part+ "-" +third_part << endl;
    
}
