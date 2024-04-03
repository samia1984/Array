#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5; // Size of the array
    int numbers[SIZE]; // Declaration of an array of integers

    // Input values into the array
    cout << "Enter " << SIZE << " integer values:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Output the elements of the array
    cout << "Elements of the array:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}