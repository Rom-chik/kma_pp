#include "cmath" //developed by Roman Antoshchuk CS-2 --29.10.2023--
#include <iostream>
#include <map>
#include <cassert>
using std::cout;
using std::endl;

void testElementsPresent(int* randomArray, const int* sortedArray, int size) {
    for (int i = 0; i < size; ++i) {
        bool present = false;
        for (int j = 0; j < size; ++j) {
            if (randomArray[i] == sortedArray[j]) {
                present = true;
                break;
            }
        }
        assert(present && "Element not found in the sorted array");
    }
}

void testSortingOrder(const int* sortedArray, int size) {
    bool arrayIsSorted = true;

    for (int i = 0; i < size - 1; ++i) {
        if (sortedArray[i] > sortedArray[i + 1]) {
            arrayIsSorted = false;
        }
        else { arrayIsSorted = true; }
    }
    assert(arrayIsSorted && "Array not sorted in the right order");
}


void swap(int* xp, int* yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int* arrayPtr, int n) {
    int i = 0;
    int j = 0;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arrayPtr[j] > arrayPtr[j + 1])
                swap(&arrayPtr[j], &arrayPtr[j + 1]);
        }
    }
}

int* generateRandomArray() {
    static int randomArray[100];

    for (int& i : randomArray) {
        i = (int)std::rand() % 100 + 1;
    }
    return randomArray;
}

int* sortArray() {
    int* randomArrayPtr;
    randomArrayPtr = generateRandomArray();
        std::map<int, int> randomArrayInMap;

    cout << "Not sorted array: " << endl;

    for (int i = 0; i < 100; ++i) {
        randomArrayInMap.insert(std::pair<int, int>(randomArrayPtr[i], i + 1));
        cout << i << ": " << randomArrayPtr[i] << endl;
    }

    cout << '\n' << endl;
    cout << "Bubble sort: " << endl;

    bubbleSort(randomArrayPtr, 100);
    for (int i = 0; i < 100; ++i) {
        cout << i << ": " << randomArrayPtr[i] << endl;
    }

    return randomArrayPtr;
}