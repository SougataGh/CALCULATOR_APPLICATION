// Member function definitions for Advance_Calculator class
#include "Calculator.h"
#include "check_Validity.h"
#include "Advance_Calculator.h"
#include<iostream>
#include<fstream>
#include<cmath>

void Advance_Calculator::add() {
    check_Validity cv;
    double res = 0;
    cout << "ENTER HOW MANY NUMBERS YOU WANT TO ADD : ";
    int n;
    cin >> n;
    cout << "ENTER THE NUMBERS : ";
    string str = "";
    for (int i = 0; i < n; i++) {
        double x;
        cv.Check(x);
        string tmp = to_string(x);
        str += tmp;
        if (i < n - 1) {
            str += '+';
        }
        res += (double)x;
    }
    cout << str << "=" << res << endl;
    string rs = to_string(res);
    fstream file;
    file.open("Calculator_history.txt", ios::out | ios::app);
    file << str << "=" << rs << "\n";
    file.close();
}

void Advance_Calculator::substract() {
    check_Validity cv;
    double res = 0;
    cout << "ENTER HOW MANY NUMBERS YOU WANT TO SUBSTRACT : ";
    int n;
    cin >> n;
    cout << "ENTER THE NUMBERS : ";
    string str = "";
    for (int i = 0; i < n; i++) {
        double x;
        cv.Check(x);
        string tmp = to_string(x);
        str += tmp;
        if (i < n - 1) {
            str += '-';
        }
        res -= (double)x;
    }
    cout << str << "=" << res << endl;
    fstream file;
    file.open("Calculator_history.txt", ios::out | ios::app);
    string rs = to_string(res);
    file << str << "=" << rs << "\n";
    file.close();
}

void Advance_Calculator::multiply() {
    check_Validity cv;
    double res = 1;
    cout << "ENTER HOW MANY NUMBERS YOU WANT TO MULTIPLY : ";
    int n;
    cin >> n;
    cout << "ENTER THE NUMBERS : ";
    string str = "";
    for (int i = 0; i < n; i++) {
        double x;
        cv.Check(x);
        string tmp = to_string(x);
        str += tmp;
        if (i < n - 1) {
            str += '*';
        }
        res *= (double)x;
    }
    cout << str << "=" << res << endl;
    string rs = to_string(res);
    fstream file;
    file.open("Calculator_history.txt", ios::out | ios::app);
    file << str << "=" << rs << "\n";
    file.close();
}

void Advance_Calculator::division() {
    check_Validity cv;
    double res = 1;
    cout << "ENTER HOW MANY NUMBERS YOU WANT TO DIVIDE : ";
    int n;
    cin >> n;
    cout << "ENTER THE NUMBERS : ";
    int f = 1;
    string str = "";
    for (int i = 0; i < n; i++) {
        double x;
       cv.Check(x);
        if (x == 0) {
            f = 0;
        }
        string tmp = to_string(x);
        str += tmp;
        if (i < n - 1) {
            str += '/';
        }
        res /= (double)x;
    }
    if (f == 0) {
        cout << "CAN'T DIVIDE BY 0\n";
        return;
    } else {
        cout << str << "=" << res << endl;
        string rs = to_string(rs);
        fstream file;
        file.open("Calculator_history.txt", ios::out | ios::app);
        file << str << "=" << rs << "\n";
        file.close();
    }
}

void Advance_Calculator::modulo() {
    check_Validity cv;
    cout << "ENTER THE DIVIDEND & DIVISOR : ";
    int x, y;
    cv.Check(x,y);
    if (y <= 0 || x < 0) {
        cout << "INAVLID DATA....!\n";
        return;
    }
    int res = (x % y);
    cout << "(" << x << "%" << y << ") = " << res << endl;
    fstream file;
    string rs = to_string(res);
    file.open("Calculator_history.txt", ios::out | ios::app);
    file << x << "%" << y << "=" << rs << "\n";
    file.close();
}

void Advance_Calculator::power() {
    check_Validity cv;
    double base, exponent;
    cout << "ENTER BASE & EXPONENT : ";
    cv.Check(base,exponent);
    double res = pow(base, exponent);
    cout << "(" << base << "^" << exponent << ") = " << res;
    string rs = to_string(res);
    fstream file;
    file.open("Calculator_history.txt", ios::out | ios::app);
    file << base << "^" << exponent << "=" << rs << "\n";
    file.close();
}

void Advance_Calculator::squareRoot() {
    check_Validity cv;
    double a;
    cout << "ENTER THE NUMBER : ";
    cv.Check(a);
    if (a >= 0) {
        double res = sqrt(a);
        cout << "RESULT = " << res << endl;
        string rs = to_string(res);
        fstream file;
        file.open("Calculator_history.txt", ios::out | ios::app);
        file << "sqrtof" << a << "=" << rs << "\n";
        file.close();
    } else {
        cout << "INVALID NUMBER INPUT......!" << endl;
        return;
    }
}
void Advance_Calculator::logr() {
    check_Validity cv;
    double base, nm;
    cout << "ENTER THE NUMBER & BASE RESPECTIVELY : ";
    cv.Check(nm,base);
    if (base > 0 && nm > 0) {
        double x = log(nm);
        double y = log(base);
        double res = x / (double)y;
        cout << "RESULT = " << res << endl;
        string rs = to_string(res);
        fstream file;
        file.open("Calculator_history.txt", ios::out | ios::app);
        file << "logof" << nm << "=" << rs << "\n";
        file.close();
    } else {
        cout << "INVALID NUMBER INPUT......!" << endl;
        return;
    }
}
void Advance_Calculator::show_History() {
    fstream file;
    file.open("Calculator_history.txt", ios::in);
    if (!file) {
        cout << "NO HISTORY TO SHOW.....\n";
        return;
    }
    string line;
    while (!file.eof()) {
        getline(file, line);
        cout << line << endl;
    }
    file.close();
}
void Advance_Calculator::choose_from_Advcalc() {
    cout << "---------------------------------------\n";
    cout << "1) ADD \n";
    cout << "2) SUBSTRACT\n";
    cout << "3) MULTIPLY\n";
    cout << "4) DIVIDE\n";
    cout << "5) MODULO\n";
    cout << "6) POWER\n";
    cout << "7) SQUARE ROOT\n";
    cout << "8) LOGARITHM\n";
    cout << "9) SHOW HISTORY\n";
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
    case '5':
        modulo();
        break;
    case '6':
        power();
        break;
    case '7':
        squareRoot();
        break;
    case '8':
        logr();
        break;
    case '9':
        show_History();
        break;
    default:
        cout << "INVALID CHOICE.....!\n";
        break;
    }
}
