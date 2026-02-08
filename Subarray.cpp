#include <iostream>
using namespace std;
int main() {
    int arr[] = {2,4,6,8,10};
    int n = sizeof(arr)/sizeof(int);
     // Outer loop for starting index
    for (int start = 0; start < n; start++) {
        // Inner loop for ending index
        for (int end = start; end < n; end++) {
            cout << "[ ";
            // Print elements from start to end
            for (int k = start; k <= end; k++) {
                cout << arr[k] << " ";
            }
            cout << "]\n";
        }
    }

    return 0;
}