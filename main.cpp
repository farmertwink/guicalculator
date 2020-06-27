//
//  main.cpp
//  calculator
//
//  Created by PJ Di Donato on 6/22/20.
//  Copyright © 2020 PJ Di Donato. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

double calculatorFunction(double a, double b, char op);

int main ()
{
    char choice = '+';
    double nr1 = 0.0;
    double nr2 = 0.0;
    
    cout << "How many digits" << endl;
    
    cout << "Input two numbers and an operator" << endl;
    cout << "Number 1: " << endl;
    cin >> nr1;
    cout << "Operator (+, -, *, /, Q for quit): " << endl;
    cin >> choice;
    cout << "Number 2: " << endl;
    cin >> nr2;
    

    while(choice != 'Q')
    {
    cout << "Result: " << calculatorFunction(nr1, nr2, choice) << endl;
        cout << "Input two numbers and an operator" << endl;
        
        cout << "Number 1: " << endl;
        cin >> nr1;
        cout << "Operator (+, -, *, /, Q for quit" << endl;
        cin >> choice;
        cout << "Number 2: " << endl;
        cin >> nr2;
        
    
    }

    
    system("PAUSE");

return 0;
}

double calculatorFunction (double a, double b, char op)
{
     double result = 0.0;

    if (op == '+') {
        result = a + b;
    }
    else if (op == '-'){
        result = a - b;
    }
    else if (op == '*') {
        result = a * b;
    }
    else if (op == '/') {
           result = a / b;
    }
    else if (op == '^') {
        result = pow(a,b);
    }
    else {
        cout << "Invalid Response" << endl;
    }
  return result;
}




