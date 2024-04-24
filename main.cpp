#include<iostream>
using namespace std;

int main() {
    int a, b;
    int choice, num1, num2;
    char cont;

    do {
        cout << "Menu:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Modulus\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if(choice < 1 || choice > 5) {
            cout << "Invalid choice. Please enter a number between 1 and 5.\n";
            continue;
        }

        cout << "Enter integer number 1:";

        cin >> num1;

        cout << "Enter integer number 2:";
        cin >> num2;

        switch(choice) {
            case 1:
                cout << "Result: " << (num1+num2) << endl;
                break;
            case 2:
                cout << "Result: " << (num1-num2) << endl;
                break;
            case 3:
                cout << "Result: " << (num1*num2) << endl;
                break;
            case 4:
                if(num2 == 0) {
                    cout << "The second integer is zero, divide by zero.\n";
                } else {
                    cout << "Result: " << ((float)num1/num2) << endl;
                }
                break;
            case 5:
                cout << "Result: " << (num1%num2) << endl;
                break;
        }

        cout << "Press 'y' or 'Y' to continue: ";
        cin >> cont;
    } while(cont == 'y' || cont == 'Y');

    return 0;
}


