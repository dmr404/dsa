#include<iostream>
using namespace std;
int main(){
    int n = 4;
     int i = 1;
    
   
    for(int i = 1; i<=4; i++) {
        for(int j = n-i; j>=1; j--) {
            cout<<"k";
        }
        int m = i;
        for(int k = 1; k <= i; k++) {
             cout<<m;
             m = m-1;
        }
        for(int k = 1; k<=i; k++) {
            if(k>1) {
            cout<<k;
            }
            
        }
        cout<<endl;
    
    }
return 0;
}
