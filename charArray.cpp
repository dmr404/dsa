#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char ch = 'a';
    cout<<(int)ch<<endl;
    char ch2 = 'f';
    int pos = ch2 - 'a';
    cout<<pos<<endl;

    //CHARACTER ARRAY
    char arr[] = "code";
    cout<<strlen(arr)<<endl;

    //INPUT CHAR ARRAY
    /*char word[30];
    cin>>word;
    cout<<"your word is: "<<word<<endl;

    char sentence[30];
    cin.getline(sentence, 30, '.');
    cout<<"your sentence is: "<<sentence<<endl;*/

    //CONVERT TO UPPERCASE
    /*char word1[] = "ApPLe";
    int n = strlen(word1)+1;
    for(int i=0; i<n; i++) {
        if(int(word1[i]>=97)){
            int pos1 = int(word1[i] - 'a');
            word1[i]= char(65+pos1);
        }else {
            continue;
        }

    }
    cout<<word1<<endl;*/

    //VALID PALINDROME
    char word2[] = "racecar";
    int n = strlen(word2)+1;
    int st=0, end=n-1;
    while(st<end){
        if(word2[st]!=word2[end]){
            cout<<"not a palindrome";
            break;
        }else {
            st++;
            end--;
        }
    }

}