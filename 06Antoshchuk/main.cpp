#include <iostream> //developed by Roman Antoshchuk CS-2 --29.10.2023--
#include "header.h"
using std::cout;
using std::endl;

int main() {

    cout << "---Lab work #06---" << endl;
    cout << "  Roman Antoshchuk  " << endl;
    cout << "----29.10.2023----" << endl;

    cout << '\n' << endl;

    testElementsPresent(generateRandomArray(), sortArray(), 100);
    testSortingOrder(sortArray(), 100);

    return 0;
}