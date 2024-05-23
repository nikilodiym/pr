#include <iostream>
#include <string>
using namespace std;

int main() {
    const int SIZE = 5;
    const int FULL_SIZE = 10;
    int arr1[SIZE], arr2[SIZE], result[FULL_SIZE];
    int index = 0;

    cout << "Enter 5 elements for the first array: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr1[i];
    }

    cout << "Enter 5 elements for the second array: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr2[i];
    }

    for (int i = 0; i < SIZE; i++) {
        if (arr1[i] > 0) {
            result[index++] = arr1[i];
        }
    }
    for (int i = 0; i < SIZE; i++) {
        if (arr2[i] > 0) {
            result[index++] = arr2[i];
        }
    }

    for (int i = 0; i < SIZE; i++) {
        if (arr1[i] == 0) {
            result[index++] = arr1[i];
        }
    }
    for (int i = 0; i < SIZE; i++) {
        if (arr2[i] == 0) {
            result[index++] = arr2[i];
        }
    }

    for (int i = 0; i < SIZE; i++) {
        if (arr1[i] < 0) {
            result[index++] = arr1[i];
        }
    }
    for (int i = 0; i < SIZE; i++) {
        if (arr2[i] < 0) {
            result[index++] = arr2[i];
        }
    }

    cout << "Resulting array: ";
    for (int i = 0; i < FULL_SIZE; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
