#include<iostream>
#include<cstring>
using namespace std;

//QUESTION-1
/*int main() {
    string st1 = "Divyam Rai";
    int i = 0;
    for(auto ch:st1){
        int tipo = ch;
        if(tipo>=97) {
            i++;
        }

    }
    cout<<i;
}*/

//QUESTION-2
/*int main() {
    string st1 = "kanb";
    string st2 = "bank";
    for(int i=0; i<st1.length(); i++){
        
        if(st1!=st2){
            swap(st1[0], st1[i]);
            if(st1==st2) {
                cout<<"ys\n";
                break;
            }else {
                swap(st1[0], st1[i]);
            }
            
        }
        
    }
    cout<<st1;
}*/

//QUESTION-3
/*bool close(string st1, string st2) {
    if(st1.length()!=st2.length()) {
        return false;
    }
    for(int i =0; i<st1.length(); i++) {
        for(int j=0; j<st1.length(); j++){
            if(st1[i] == st2[j]) {
                return true;
            }
        }
    }
    return false;
}
int main() {
    string st1 = "abcde";
    string st2 = "bcdeaa";
    cout<<close(st1, st2)<<endl;
}*/

//QUESTION-4
