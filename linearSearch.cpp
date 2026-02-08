#include <iostream>
using namespace std;

//LINEAR SEARCH : to find index value of key
/*int linearSearch(int *arr, int n, int key) {
    for(int i = 0; i<n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {2,4,6,8,10,12,14,16} ;
    int n = sizeof(arr)/sizeof(int);
    cout<<linearSearch(arr, n, 10)<<endl;
    return 0;
}*/

//REVERSE OF AN ARRAY
//1)with extra space (copy space bnaya)
void printArr(int *arr, int n) {
    for(int i = 0; i<=n-1; i++) {
        cout<<arr[i]<<",";
    }
    cout<<endl;
}
/*int main() {
    int arr[] = {5,4,3,2,9};
    int n = sizeof(arr) / sizeof(int);
    
    int copyArr[n];
    for(int i = 0; i<n; i++) {
        int j = n-i-1;
        copyArr[i] = arr[j];
    }
    for(int i = 0; i<n; i++) {
        arr[i] = copyArr[i];
    }
    printArr(arr, n);
}*/

//without extra space (swap kr dia start end ko)
int main() {
    int arr[] = {2,4,6,8,10,9,7,5,3,1};
    int n = sizeof(arr)/sizeof(int);

    int start=0, end = n-1;
    while(start<end){
        /*int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;*/

        swap(arr[start], arr[end]); //for swapping shorter way

        start++;
        end--;
    }
    printArr(arr, n);
    return 0;
}
