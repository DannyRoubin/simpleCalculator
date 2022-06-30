//Calculator.cpp

#include <iostream>

using namespace std;

void math () {

char op;
    float number1, number2;



    cout << "enter an operator: +, -, *,/ ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> number1 >> number2;

    switch(op) {

        case '+': 
        cout << number1 << "+" << number2 << "=" << number1 + number2 << endl; 
        break;

        case '-': 
        cout << number1 << "-" << number2 << "=" << number1 - number2 << endl;  
        break;

        case '*': 
        cout << number1 << "*" << number2 << "=" << number1 * number2 << endl;  
        break;

        case '/': 
        cout << number1 << "/" << number2 << "=" << number1 / number2 << endl; 
        break;

        default:
        cout << "Please enter a valid operator only" << endl;
        break;
    }
}

int main() {

    char choice;
    bool cont;

    math();

    while(true) {

        cout << "would you like to continue use?: y/n :";
        cin >> choice;

        switch(choice) {
            case 'n':
            return 0;

            default:
            math();
            break;
        }


    }



    



    
}