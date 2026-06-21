#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> prices(n);
    for(int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    int money;
    cin>>money;
    sort(prices.begin(),prices.end());
    
    if(prices[0]+prices[1]<=money){
        cout<<money-(prices[0]+prices[1]);
    }else{
        cout<<money;
    }
    
    return 0;
}