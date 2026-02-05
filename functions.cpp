/*
FUNCTIONS
returnType fName() {
    //do some work
    return some value;//optional
}
fName(; //function call) 
*/

//factorial of a number
#include<iostream>
using namespace std;

int factorial(int n) {
    int facto=1;
    for(int i=1;i<=n;i++){
        facto = i*facto;
    }
    cout<<facto<<endl;
    return facto; // 0=1, 1=1,
}
int main() {
    factorial(0);
}
