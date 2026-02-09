#include <iostream>
using namespace std;
/*void maxSubarraySum1(int *arr, int n) {
    for(int start =0; start<n; start++) {
        for(int end = start; end<n; end++) {
            int currSum = 0;
            for(int i = start; i<=end; i++) {
                currSum += arr[i];
            }
            cout<<currSum<<",";
        }
        cout<<endl;
    }
} THIS GIVES ALL SUBARRAY SUM*/
void maxSubarraySum1(int *arr, int n) {
    int maxSum =INT8_MIN;
    for(int start =0; start<n; start++) {
        for(int end = start; end<n; end++) {
            int currSum = 0;
            for(int i = start; i<=end; i++) {
                currSum += arr[i];
            }
            cout<<currSum<<",";
            maxSum= max(maxSum, currSum);
        }
        cout<<endl;
    }
    cout<<"maximum subarray sum = "<<maxSum;
}
int main() {
    int arr[] = {-2,4,-6,8,10};
    int n = sizeof(arr)/sizeof(int);
    maxSubarraySum1(arr, n);
return 0;
}
