#include<iostream>
using namespace std;
int main() {
    int arr[] = {2,3,4,4};
    cout<<sizeof(arr)<<endl; //this tells how many byte the array takes
    cout<<sizeof(arr) / sizeof(int)<<endl; //this tells length
    //output of array
    int n = sizeof(arr)/sizeof(int);
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    //input of array
    int marks[5];
    int k = sizeof(arr)/sizeof(int);
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    return 0;

}