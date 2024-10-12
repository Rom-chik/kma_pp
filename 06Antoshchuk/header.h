#pragma once
int* sortArray();
void bubbleSort(int* arrayPtr, int n);
int* generateRandomArray();
void testElementsPresent(int* randomArray, const int* sortedArray, int size);
void testSortingOrder(const int* sortedArray, int size);