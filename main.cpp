#include <iostream>;
#include <string>;
using namespace std;

int main() {
	const int size = 5;
    int arr1[size] = { 1, 2, 3, 4, 5 };
    int arr2[size] = { 6, 7, 8, 9, 10 };
    int result[size];

    for (int i = 0; i < size; ++i) {
        result[i] = arr1[i] + arr2[i];
    }

    std::cout << "Result sum arr: ";
    for (int i = 0; i < size; ++i) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

	system("pause");
	return 0;
}