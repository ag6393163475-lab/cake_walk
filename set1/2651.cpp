#include<iostream>
using namespace std;
int main(){
    int arrivalTime;
    cout<<"arrivalTime=";
    cin>>arrivalTime;

    int delayedTime;
    cout<<"delayTime=";
    cin>>delayedTime;

    if((arrivalTime + delayedTime)>=24){
        cout<<arrivalTime +delayedTime -24<<endl;
    }else{
        cout<<arrivalTime +delayedTime<<endl;
    }
    
    return 0;
}
