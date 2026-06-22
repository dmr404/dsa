#include<iostream>
using namespace std;
int main() {
    /*int x;
    int *ptr;
    x = 7;
    ptr = &x;
    cout<<*ptr;*/
    int x = 123;
        int y=x;
        double rev=0;
        
       while(x>0){
        int temp = x%10;
        rev = rev*10+temp;
        x=x/10;
       } 
       cout<<x;
       x=y;
       cout<<x<<endl;
       cout<<rev<<endl;
       if(rev==x){
        return x;
       }
    return 0;

    
}