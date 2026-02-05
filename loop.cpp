#include <iostream>
using namespace std;

int main() {
    for(int i = 0; i < 5; i++) {
        cout <<i+99<<"  ";
    }
    cout<<endl;
    cout<<endl;

    //reverse of a no. by while loop
    int revDig = 0;
    int n = 146454;
    while(n>0) {
        int lastDig = n%10;
        revDig = lastDig + revDig*10;
        n=n/10;
    }
    cout<<revDig<<endl<<endl;

    //do-while loop, works get done atleast once
    int i = 1;
    do{
        cout<<i<<"  ";
        i++;
    } while(i<=5);
    cout<<endl<<endl;




    return 0;
}