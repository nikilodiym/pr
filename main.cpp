#include <iostream>;
#include <string>;
using namespace std;

void copyArray(int source[], int dest1[], int dest2[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        dest1[i] = source[i];
    }

    for (int i = size / 2; i < size; ++i) {
        dest2[i - size / 2] = source[i];
    }
}

int main() {
    int source[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int dest1[5];
    int dest2[5];

    copyArray(source, dest1, dest2, 10);

    for (int i = 0; i < 5; ++i) {
        cout << dest1[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < 5; ++i) {
        cout << dest2[i] << " ";
    }

    cout << endl;

	system("pause");
	return 0;
}