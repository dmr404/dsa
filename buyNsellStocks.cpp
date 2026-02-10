#include <iostream>
using namespace std;

void bestBuy(int *prices, int n) {
    int bestBuy[n];
    bestBuy[1] = INT8_MAX;
    for(int i=0; i<n; i++) {
        bestBuy[i] = min(bestBuy[1], prices[i]);
    } 
    cout<<"best buying array  ";
    for(int i=0; i<n; i++) {
        cout<<bestBuy[i]<<", ";
    }
    int maxProfit =0;
    for(int i =0; i<n; i++) {
        int currProfit = prices[i]-bestBuy[i];
        maxProfit = max(currProfit, maxProfit);
    }
    cout<<"\n max profit will be "<<maxProfit<<endl;
}

int main() {
    int prices[] = {7,1,5,3,6,4};
    int n = sizeof(prices)/sizeof(int);
    bestBuy(prices, n);
    return 0;
}