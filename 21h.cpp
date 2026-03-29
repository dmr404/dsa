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
