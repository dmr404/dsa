#include<iostream>
#include<vector>
using namespace std;

//VECTORS
/*int main() {
    vector<int> vec1; //initial iski size aur capacity dono zero hai

    vector<int> vec2 = {1,2,3,4}; //inki capacity yhi define ho gai
    cout<<vec2.size()<<endl;
    cout<<vec2.capacity()<<endl;
    vec2.push_back(5); //vec le last mai ye element add kr deta
    for(int i =0; i<vec2.size(); i++){
        cout<<vec2[i]<<" ";}
        cout<<endl;
    vec2.pop_back(); //vec ke last wala element delete kr deta
    for(int i =0; i<vec2.size(); i++){
        cout<<vec2[i]<<" ";}
        cout<<endl;
    cout<<vec2.capacity()<<endl;

    vector<int> vec3(10, -1); //10 size ka vector jo sbme -1 hoga
    cout<<vec3.size()<<endl;
    for(int i =0; i<vec3.size(); i++){
        cout<<vec3[i]<<" ";
    }
}*/

//PAIR SUM
int main() {
vector<int> vec = {2,7,11,15};
int target = 17;

//BRUTE FORCE
/*for(int i =0; i<vec.size(); i++) {
    for(int j =0; j<vec.size(); j++) {
        if(i != j){
            if((vec[i]+vec[j]) == target) {
                cout<<i<<" ,"<<j<<endl;
                cout<<"yupp\n";
                return 0;
            }
        }
    }
}
}*/

//LINEAR APPROCH
