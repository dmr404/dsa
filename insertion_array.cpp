#include<iostream>
using namespace std;

/*int main() {
    int arr[] = {5,4,1,2,3};
    int n = sizeof(arr) / sizeof(int);
    for(int i =1; i<n; i++) {
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>curr) {
            swap(arr[prev], arr[prev + 1]);
            prev = prev--;
        }
        arr[prev + 1] = curr;
        

    }
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}*/

#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50}; // initial array
    int n = 5; // current size
    int pos, elem;

    cout << "Enter position (1-based index): ";
    cin >> pos;
    cout << "Enter element to insert: ";
    cin >> elem;

    // Shift elements to the right
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = elem; // insert element
    n++; // increase size

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
