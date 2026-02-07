//largest in array
#include<iostream>
using namespace std;
/*int main() {
    int arr[] = {2,3,4,4};
    int n = sizeof(arr)/sizeof(int);
    int max = arr[0];

    for(int i = 0; i<n; i++) {
        if(arr[i]>max) {
            max = arr[i];
            cout<<"largest "<<arr[i]<<" . \n";
        }
    }
    cout<<max<<endl;
return 0;
}*/

//array pased by refrence
void printArr(int nums[], int n) {
    for(int i=0; i<n; i++) {
        cout<<nums[i]<<",";
    }
    cout<<endl;
}
int main() {
    int arr[]={1,2,3,4,5} ;
    int n = sizeof(arr)/sizeof(int);
    printArr(arr, n);
    return 0;
}