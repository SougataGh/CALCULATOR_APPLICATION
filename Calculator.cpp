// Member function definitions for Calculator class
#include "Calculator.h"
#include "check_Validity.h"
#include "Advance_Calculator.h"
#include<iostream>
using namespace std;
void Calculator::add() {
    check_Validity cv;
    double x, y;
    cout << "ENTER TWO NUMBERS : ";
    cv.Check(x,y);
    cout << "(" << x << "+" << y << ") = " << (x + y) << endl;
}

void Calculator::substract() {
    check_Validity cv;
    double x, y;
    cout << "ENTER TWO NUMBERS : ";
    // Check if the extraction is successful
    cv.Check(x,y);
    cout << "(" << x << "-" << y << ") = " << (x - y) << endl;
}

void Calculator::multiply() {
    check_Validity cv;
    double x, y;
    cout << "ENTER TWO NUMBERS : ";
    cv.Check(x,y);
    cout << "(" << x << "*" << y << ") = " << (x * (double)y) << endl;
}

void Calculator::division() {
    check_Validity cv;
    double x, y;
    cout << "ENTER TWO NUMBERS : ";
   cv.Check(x,y);
    if (y == 0) {
        cout << "CAN'T DIVIDE BY 0\n";
        return;
    }
    cout << "(" << x << "/" << y << ") = " << (x / (double)y) << endl;
}

void Calculator::choose_from_calc() {
    cout << "---------------------------------------\n";
    cout << "1) ADD \n";
    cout << "2) SUBSTRACT\n";
    cout << "3) MULTIPLY\n";
    cout << "4) DIVIDE\n";
    cout << "---------------------------------------\n";
    cout << "PLEASE ENTER YOUR CHOICE : ";
    char ch;
    cin >> ch;
    switch (ch) {
    case '1':
        add();
        break;
    case '2':
        substract();
        break;
    case '3':
        multiply();
        break;
    case '4':
        division();
        break;
    default:
        cout << "INVALID CHOICE.....!\n";
        break;
    }
}
