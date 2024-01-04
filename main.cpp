//Main Function detailing 
int main() {
    Advance_Calculator acl;
    // Advance_Calculator acl;
    while (1) {
        system("cls");
        cout << "-----------------------------------------\n";
        cout << "1) SIMPLE CALCULATOR\n";
        cout << "2) ADVANCED CALCULATOR\n";
        cout << "-----------------------------------------\n";
        cout << endl << "ENTER YOUR CHOICE : ";
        char ch;
        cin >> ch;
        switch (ch) {
        case '1':
            acl.choose_from_calc();
            break;
        case '2':
            acl.choose_from_Advcalc();
            break;
        default:
            cout << "INVALID CHOICE.....!\n";
            break;
        }
        cout << "ENTER YES IF YOU WANT TO CONTINUE ELSE ENTER NO : ";
        string str;
        cin >> str;
        if (str == "NO" || str == "No" || str == "no") {
            break;
        }
    }
    return 0;
}
