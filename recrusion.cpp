#include<iostream>
using namespace std;
int fact(int n) {
    if(n==0) {
        return 1;
    }
    return n*fact(n-1);
}
void print(int n) {
    if(n==0) {
        return;
    }
    cout<<n<<" ";
    print(n-1);  // yha hum return main fn call nhi kr rhe
}
int sum(int n) {
    if(n==1) {
        return 1;
    }
return n+sum(n-1);
}
int fib(int n) {
    if(n==0 || n==1) {
        return n;
    }
    return fib(n-1)+fib(n-2);
}

bool isSorted(int arr[], int n, int i) {
    if(i==n-1){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    return isSorted(arr, n, i+1);
}
int main() {
    cout<<fib(5)<<endl;
    int arr[5] = {1,2,3,4,5};
    int arr2[5] = {1,2,3,5,4};
    cout<<isSorted(arr2, 5, 0);
}