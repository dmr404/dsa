#include<iostream>
using namespace std;

//BRUTE FORCE
int brute(int mat[][4], int n, int m, int key) {
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            if(mat[i][j]==key){
                cout<<i<<", "<<j<<endl;
                return 0;
            }else {
                continue;
            }
        }
    }
    cout<<"key not found";
return 0;
}

//BINARY SEARCH
int brySrch(int mat[][4], int n, int m, int key) {
    for(int i=0; i<n; i++) {
        int st = 0, end = m-1;
        while(st<=end){
            int mid = (st+end)/2;
        if(mat[i][mid]==key){
            cout<<i<<", "<<mid;
            return mid;
        }else if(mat[i][mid]<key){
            st = mid+1;
        } else {
            end = mid -1;
        }  
    }
    }
    return -1;
}

//STAIRCASE SEARCH


int main() {
    int arr[][4] = {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    brute(arr, 4, 4, 39);
    brySrch(arr, 4, 4, 39);
    
return 0;
}