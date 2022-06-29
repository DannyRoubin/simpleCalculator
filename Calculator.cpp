//Calculator.cpp

#include <iostream>

using namespace std;

void math (float num1, float num2) {

}

int main() {


    char op;
    float number1, number2;



    cout << "enter an operator: +, -, *,/ ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> number1 >> number2;

    switch(op) {

        case '+': 
        cout << number1 << "+" << number2 << "=" << number1 + number2; 
        break;

        case '-': 
        cout << number1 << "-" << number2 << "=" << number1 - number2; 
        break;

        case '*': 
        cout << number1 << "*" << number2 << "=" << number1 * number2; 
        break;

        case '/': 
        cout << number1 << "/" << number2 << "=" << number1 / number2; 
        break;
    }



    
}