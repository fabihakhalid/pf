#include <iostream>
using namespace std;

int main() {
    int arr[5] = {12, 45, 23, 67, 34};
    int max = arr[0];

    for (int i = 1; i < 5; i++) { 
        if (arr[i] > max)
            max = arr[i];
    }

    cout << "The largest element is: " << max << endl;
    return 0;
}
