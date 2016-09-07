//
//  main.cpp
//  Book Exercise 3.36 - Palindrome Number
//
//  Created by ax on 9/7/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    // Program Title
    cout << "Palindrome Number ";
    
    // data storage
    int input_number = 0;
    int first_digit = 0;
    int second_digit = 0;
    int third_digit = 0;
    
    // I
    cout << "Enter a three digit integer: ";
    cin >> input_number;
    
    // P
    // divide off digits by modulus and store
    first_digit = (input_number % 10);
    second_digit = ((input_number - first_digit) / 10) % 10;
    third_digit = ((((input_number - first_digit) / 10) - second_digit) / 10) % 10;
    
    // O

    if (first_digit == third_digit) {
        cout << input_number << " is a palindrome number." << endl;
    } else {
        cout << input_number << " is not a palindrome number." << endl;
    }
    
    return 0;
}
