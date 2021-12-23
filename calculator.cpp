//
//  main.cpp
//  calculator
//
//

#include <iostream>
using namespace std;

//edited at this time


int main(int argc, const char * argv[]) {
    double x, y;
    string op;
    
    cout << "Welcome to Michelle's calculator! Please choose an 'x' value: \n";
    cin >> x;
    while (op!= "Q") {
        cout << "Please choose one of the following operators\n";
        cout << "+ (Addition)\n";
        cout << "- (Subtraction)\n";
        cout << "* (Multiplication)\n";
        cout << "/ (Division)\n";
        cout << "C (Clear)\n";
        cout << "Q (Quit)\n";
        cin >> op;
        
        if (op == "+" || op == "-" || op == "*" || op == "/" || op == "C" || op == "Q") {
            //Addition
            if (op == "+") {
                cout << "Choose a 'y' value: \n";
                cin >> y;
                x = x + y;
                cout << "The answer is: " << x << endl;
            }
            //Subtraction
            if (op == "-") {
                cout << "Choose a 'y' value: \n";
                cin >> y;
                x = x - y;
                cout << "The answer is: " << x << endl;
            }
            //Multiplication
            if (op == "*") {
                cout << "Choose a 'y' value: \n";
                cin >> y;
                x = x * y;
                cout << "The answer is: " << x << endl;
            }
            //Division
            if (op == "/") {
                cout << "Choose a 'y' value: \n";
                cin >> y;
                x = x / y;
                cout << "The answer is: " << x << endl;
            }
            //Clear
            if (op == "C") {
                x = 0;
                cout << "Please choose an x value: \n";
                cin >> x;
            }
            
        } else {
                cout << "That operator does not exist. Try again. \n";
            }
            
    }
    cout << "The program has finished. The last answer you got was:\n " << x << endl;

    
}
