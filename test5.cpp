#include <iostream>
using namespace std;

// Function to swap two integers
void swap(int& a, int& b) {
int temp = a;
a = b;
b = temp;
}

// Function to perform bubble sort
void bubbleSort(int arr[], int size) {
for (int i = 0; i < size - 1; ++i) {
   for (int j = 0; j < size - i - 1; ++j) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        }
        }
    }
}

// Function to print array elements
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int SIZE = 5;
    int numbers[SIZE];

    // Input values into the array
    cout << "Enter " << SIZE << " integer values:\n";
    for (int i = 0; i < SIZE; ++i) {
    cout << "Enter value " << i + 1 << ": ";
    cin >> numbers[i];
    }

    // Sort the array
    bubbleSort(numbers, SIZE);

    // Output the sorted array
    cout << "Sorted array in ascending order:\n";
    printArray(numbers, SIZE);

    return 0;
}