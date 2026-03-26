#include<iostream>
#include<cstring>
using namespace std;


int main() {
   /* char str1[100];
    char str2[100] = "Hello";
    strcpy(str1, str2);
    cout<<str1<<endl;
    char str3[100]= "hello";
    char str4[100] = "world";
    strcat(str3, str4);
    cout<<str3<<endl;
    char str5[100] = "Ceow";
    char str6[100] = "Hello";
    cout<<strcmp(str5, str6)<<endl;*/


    /*string str = "hello";
    cout<<str<<endl;*/

    //TO ACCESS INDIVIDUAL CHARACTERS OF A LOOP
    string str = "divyam rai";
    //METHOD-1
    for(int i = 0; i<str.length(); i++) {
        cout<<str[i]<<"_";
    }
    cout<<"\n";

    //METHOD-2
    for(char ch : str) { //bta rha ki jb tk str mai char hai unko print kro without using indices
                         //char ki jagah auto likhe to jada cleaner hoga since char isliye use kr rhe since string hai auto rahega to vector etc mai bhi use kr skte since compiler automatic detect kr lega konsa use kre.
        cout<<ch<<"_";
    }
    
return 0;
}