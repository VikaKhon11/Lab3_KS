#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}

int main() {
    srand(time(NULL));
    for (int i = 0; i < 100000; i++) {
        int arr[65];
        for (int j = 0; j < 65; j++) {
            arr[j] = rand() % 65 + 1;
        }
        int n = sizeof(arr) / sizeof(arr[0]);
        for (int j = 0; j < 65; j++) {
            selectionSort(arr, n);
        }
    }
    cout << " Lab 3 " << endl;
    return 0;
}