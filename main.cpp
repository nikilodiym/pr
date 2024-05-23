#include <iostream>
using namespace std;

int main() {
    const int FULL_SIZE = 10;
    int arr[FULL_SIZE];
    int size;

    do {
        cout << "Enter the size of the array (max size " << FULL_SIZE << "): ";
        cin >> size;
    } while (size > FULL_SIZE || size <= 0);

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int index = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }

    while (index < size) {
        arr[index++] = -1;
    }

    cout << "New array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
