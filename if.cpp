#include <iostream>
using namespace std;

int main() {
    int number;

    // Input from the user
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is a multiple of 7 or 11
    if (number % 7 == 0 || number % 11 == 0) {
        cout << number << " is a multiple of 7 or 11." << endl;
    } else {
        cout << number << " is NOT a multiple of 7 or 11." << endl;
    }

    return 0;
}
