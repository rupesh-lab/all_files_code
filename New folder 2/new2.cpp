#include <iostream>
using namespace std;

int main() {
    int var = 20;
    int* ptr = &var;      // Pointer to var
    int** ptr2 = &ptr;    // Pointer to the pointer ptr

    // Display the value of var using ptr and ptr2
    cout << "Value of var: " << var << endl;
    cout << "Value of var using ptr: " << *ptr << endl;
    cout << "Value of var using ptr2: " << **ptr2 << endl;

    // Demonstrating pointer arithmetic
    int arr[5] = {1, 2, 3, 4, 5};
    int* p = arr; // Pointer to the first element of the array

    cout << "\nArray elements using pointer arithmetic:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << *(p + i) << endl;
    }

    // Dynamic memory allocation
    int* dynamicArr = new int[5]; // Dynamically allocate an array of 5 integers

    // Assign values to the dynamic array
    for(int i = 0; i < 5; i++) {
        dynamicArr[i] = i * 10;
    }

    // Display the dynamically allocated array
    cout << "\nDynamically allocated array:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "dynamicArr[" << i << "] = " << dynamicArr[i] << endl;
    }

    // Free the dynamically allocated memory
    delete[] dynamicArr;

    return 0;
}
