#include<iostream>
using namespace std;

//QUESTION-1
/*int main() {
    int arr[][4] = {{2,3,4,7}, {2,4}, {2,7,7,7}};
    int ans =0;
    for(int i=0; i<3;i++){
        for(int j=0; j<4; j++){
            if(arr[i][j]==7){
                ans += 1;
            }
        }
    }
    cout<<ans;
}*/

//QUESTION-2
/*int main() {
    int num [][3] = {{2,4,5}, {4,6,4},{3,5,7}};
    int sum = 0;
    for(int i = 0; i<3; i++){
        sum += num[1][i];
    }
    cout<<sum;
}*/

//QUESTION-3
/*int main() {
    int matrix[][3] = {{111,112,113},{121,122,123}};
    int transpose[][2] = {{0}};
    for(int i=0; i<2; i++){
        for(int j = 0;j<3; j++){
            transpose[j][i] = matrix[i][j];
        }
    }
    for(int i=0; i<2; i++){
        for(int j = 0;j<3; j++){
            cout<<transpose[i][j]<<" ";
        
        }
        cout<<endl;
    }
}*/

//QUESTION-4  INCOMPLETE
/*int main () {
    int arr[] = {1,2};
    int matrix[2][2] = {{0}};
    int n = sizeof(arr) / sizeof(int);
    int row2 = n/2;
    if(n%2==0) {
        
        for(int i = 0; i<row2; i++){
            matrix[0][i] = arr[i];
        }
        for(int i = 0; i<row2; i++) {
            matrix[1][i] = arr[i+row2];
        }
    }
    for(int i=0; i<row2; i++){
        for(int j = 0;j<row2; j++){
            cout<<matrix[i][j]<<" ";
        
        }
        cout<<endl;
    }
    cout<<n;
}*/


//QUESTION-5
int main() {
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int n = 3;
    for(int i=0; i<2; i++){
        for(int j = 0;j<3; j++){
            swap(matrix[i][j-i], matrix[j][n-i]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j = 0;j<n; j++){
            cout<<matrix[i][j]<<" ";
        
        }
        cout<<endl;
    }
}
