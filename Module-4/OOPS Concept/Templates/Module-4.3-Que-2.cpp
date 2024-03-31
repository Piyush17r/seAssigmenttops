//Write a program of to sort the array using templates
#include <iostream>
#include <algorithm>

using namespace std;

template <typename T, size_t size>
void sortArray(T (&arr)[size]) {
    sort(arr, arr + size);
}

template <typename T, size_t size>
void printArray(const T (&arr)[size]) {
    for (size_t i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArray[] = {5, 3, 8, 2, 1};
    double doubleArray[] = {3.14, 2.71, 1.618, 1.414, 0.577};

    cout << "Before sorting integer array: ";
    printArray(intArray);
    sortArray(intArray);
    cout << "After sorting integer array: ";
    printArray(intArray);

    cout << "\nBefore sorting double array: ";
    printArray(doubleArray);
    sortArray(doubleArray);
    cout << "After sorting double array: ";
    printArray(doubleArray);

    return 0;
}
