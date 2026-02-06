//largest in array
#include<iostream>
using namespace std;
int main() {
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
}