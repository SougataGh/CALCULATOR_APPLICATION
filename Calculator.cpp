// Member function definitions for Calculator class
void Calculator::add() {
    double x, y;
    cout << "ENTER TWO NUMBERS : ";
    cin >> x >> y;
    cout << "(" << x << "+" << y << ") = " << (x + y) << endl;
}

void Calculator::substract() {
    double x, y;
    cout << "ENTER TWO NUMBERS : ";
    // Check if the extraction is successful
    while (!(cin >> x>>y))
    {
        cout << "INAVID INPUT.PLEASE ENTER COORECT INPUT\n";
        cin.clear();
        cin.ignore();
    }
    cout << "(" << x << "-" << y << ") = " << (x - y) << endl;
}

void Calculator::multiply() {
    double x, y;
    cout << "ENTER TWO NUMBERS : ";
    while (!(cin >> x>>y))
    {
        cout << "INAVID INPUT.PLEASE ENTER COORECT INPUT\n";
        cin.clear();
        cin.ignore();
    }
    cout << "(" << x << "*" << y << ") = " << (x * (double)y) << endl;
}

void Calculator::division() {
    double x, y;
    cout << "ENTER TWO NUMBERS : ";
   while (!(cin >> x>>y))
    {
        cout << "INAVID INPUT.PLEASE ENTER COORECT INPUT\n";

        cin.clear();
        cin.ignore();
    }
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
