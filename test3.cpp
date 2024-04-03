#include <iostream>
using namespace std;

int main() {
    
    int numbers[10]={23,24,25,26,27,0,0,34,0,0}; // Declaration of an array of integers



    // Output the elements of the array
    cout << "Elements of the array:\n";
    for (int i = 0; i < 10; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}