#include<iostream>
#include<vector>
using namespace std;

//DYNAMIC ARRAY
/*int main() {

    //DYNAMIC 1D ARRAY
    int size;
    cin>>size;
    int *arr = new int[size];
    for(int i = 0; i<size; i++) {
        cin>>arr[i];
    }
    for(int i =0; i<size; i++) {
        cout<<arr[i];
    }

}*/

//DYNAMIC VARIABLE  (plus memory deletion)
/*void function() {
    int *ptr = new int;
    *ptr = 3;
    cout<<*ptr;
    delete ptr;
}
int main() {
    function();
}*/

//2D DYNAMIC ARRAY
/*int main() {
    int  row, col;
    cout<<"enter row";
    cin>>row;
    cout<<"enter colums\n";
    cin>>col;
    int* *matrix = new int*[row];
    for(int i =0; i<row; i++) {
        matrix[i] = new int[col];
    }

    int x=1;
    for(int i =0; i<row; i++) {
        for(int j = 0; j<col; j++) {
            matrix[i][j] = x++;
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}*/
