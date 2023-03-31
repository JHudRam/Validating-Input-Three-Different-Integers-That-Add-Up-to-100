/*
 PIC 10A Homework 3, threeNumbers.cpp
 Author: Jacob Ramos
 Date: 02/13/2023
*/

#include <iostream>
using namespace std;

//Check if the three intigers are duplicates
bool Duplicate(int num1, int num2, int num3) {
return (num1 == num2 || num1 == num3 || num2 == num3);
}

int main() {
    int num1, num2, num3;
    bool success = false;
    
    //Ask the user to enter three different integers
    while (!success) {
        cout << "Please enter three different integers: ";
        if (cin >> num1 >> num2 >> num3 && !Duplicate(num1, num2, num3) && num1 + num2 + num3 == 100) {
            success = true;
        } else {
            cout << "Fail to enter three different integers. ";
            cin.clear();
          
        }
    }
    
    //Once the input has three different intigers that add up to 100
    cout << "The three different integers are: " << num1 << " " << num2 << " " << num3 << endl;
    return 0;
}
