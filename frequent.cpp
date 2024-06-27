#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 2, 1, 4, 1, 3, 3, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max = 0;
    int Frequent = arr[0];

    for (int i = 0; i < size; ++i) {
        int count = 0;
        for (int j = 0; j < size; ++j) {
            if (arr[j] == arr[i]) {
                ++count;
            }
        }
        if (count > maxCount) {
            max = count;
            Frequent = arr[i];
        }
    }

    cout << "The most frequent element is " << Frequent;

    return 0;
}
