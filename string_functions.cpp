#include<iostream>
#include<cstring>
using namespace std;

int main() {
    /*string str = "divyam rai.";
    cout<<str.length()<<endl;
    cout<<str.at(5)<<endl;
    cout<<str.substr(7, 9)<<endl;
    cout<<str.find("rai")<<endl;*/

    //VALID ANAGRAM
    string str1 = "anagram";
    string str2 = "nagaram";

    //METHOD1 BRUTE FORCE
    /*for(int i =0; i<str1.length()-1; i++) {
        for(int j =0; j<=i; j++){
            if(str1[j]>str1[j+1]) {
            swap(str1[j], str1[j+1]);
            }
        }
        
    }
    cout <<str1<<endl;
    for(int i =0; i<str2.length()-1; i++) {
        for(int j =0; j<=i; j++){
            if(str2[j]>str2[j+1]) {
            swap(str2[j], str2[j+1]);
            }
        }
        
    }
    cout<<str2<<endl;
    if(str1 == str2) {
        cout<<"valid"<<endl;
    }else{
        cout<<"envalid"<<endl;
    }

}*/

//METHID-2 OPTIMISED
int arr[26] {0};
for(int i=0; i<str1.length(); i++) {
    int idx = str1[i]-'a';
    arr[idx]++;
}
for(int i =0; i<str2.length(); i++){
    int idx = str2[i]-'a';
    if(arr[idx]==0){
        cout<<"not valid"<<endl;
        break;
    }
    arr[idx]--;   
}
cout<<"valid"<<endl;
return 0;
}
