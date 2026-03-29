#include<iostream>
using namespace std;

//QUESTION-1
/*void checkRep(int rep[], int n) {
    for(int i = 0; i<n; i++) {
        for(int j=0; j<n; j++){
            if((rep[i]==rep[j])&&(i != j)){
                cout<<"true"<<endl;
                //cout<<rep[i]<<" "<<rep[j];
                return;
            }
        }
        
    }
    cout<<"false";
}
int main() {
    int arr[] = {2,3,5,6,8,2};
    int n = sizeof(arr)/sizeof(int);
    //cout<<n;
    checkRep(arr, n);
return 0;
}*/

//QUESTION-2
/*void findingNimo(int arr[], int n) {
    for(int i=0; i<n; i++) {

    }
}
int main() {
    int arr[] = {7,8,9,3,5,6};
    int n = sizeof(arr)/sizeof(int);
}*/

//QUESTION-3
/*void product(int arr[], int n) {
   
    int currpdt =1;
    int maxpdt =0;
    for(int i =0; i<n; i++) {
        currpdt *= arr[i];
        
        maxpdt = max(currpdt, maxpdt);
        if(currpdt<0){
            currpdt=1;
            
        }
        
    }
    cout<<maxpdt<<endl;
}
int main() {
    int arr[] = {2,3,-2,4,7,-9};
    int n = sizeof(arr)/sizeof(int);
    product(arr, n);

}*/