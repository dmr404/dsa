#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    
        int arr[] = {0,0,1,2,2,3,1,3,4,5,5};
        
        int n = sizeof(arr)/sizeof(int);
        cout<<n<<endl;
        sort(arr, arr+n);
        for(int i =0; i<n-1; i++){
            if(arr[i]!=arr[i+1]){
                cout<<arr[i];
            }
        }
        

return 0;
}