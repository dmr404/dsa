#include<iostream>
#include<algorithm>
using namespace std;

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
int main() {
    //ASCENDING ORDER
    /*int arr[6] = {1,5,3,7,8,9};
    sort(arr, arr+6);

    print(arr, 6);
    return 0;*/

    //DESENDING ORDER

int arr[6] = {1,5,3,7,8,9};
    sort(arr, arr+6, greater<int>());

    print(arr, 6);
    return 0;
}