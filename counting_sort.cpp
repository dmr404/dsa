#include <iostream>
using namespace std;

void countingSort(int arr[], int n) {
    // Step 1: Find the maximum element
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }

    // Step 2: Create count array
    int count[maxVal + 1]; 
    for (int i = 0; i <= maxVal; i++) {
        count[i] = 0;
    }

    // Step 3: Count occurrences
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Step 4: Reconstruct sorted array
    int index = 0;
    for (int i = 0; i <= maxVal; i++) {
        while (count[i] > 0) {
            arr[index++] = i;
            count[i]--;
        }
    }
}

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    countingSort(arr, n);

    cout << "Sorted array:   ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}