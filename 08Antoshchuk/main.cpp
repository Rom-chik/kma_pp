#include <iostream> //developed by Roman Antoshchuk CS-2 --13.11.2023--
#include "headers.h"
using std::cout;
using std::endl;

int main() {

    cout << "---Lab work #08---" << endl;
    cout << "  Roman Antoshchuk  " << endl;
    cout << "----13.11.2023----" << endl;

    cout << '\n' << endl;

    
    int counter = 0;

    cout << "1. Power function: " << endl;
    for (int i = 7; i < 10; ++i) {
        for (int j = 1; j < 10; ++j) {
            counter = 0;
            cout << i << "^" << j << " = " << power(i, j, ++counter) << " , counter = " << counter << endl;
        }
    }

    cout << "\n2. Fibonacci: " << endl;
    for (int i = 1; i < 20; ++i) {
        counter = 0;
        cout << i << "-st" << " Fib number = " << Fibonacci(i, counter) << " , counter = " << counter << endl;
    }


    cout << "\n3. Quick Fibonacci: " << endl;
    for (int i = 1; i < 20; ++i) {
        counter = 0;
        cout << i << "-st" << " Fib number = " << quickFibonacci(i, counter) << " , counter = " << counter << endl;
    }

    return 0;
}