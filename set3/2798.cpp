#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int target;
    cout<<"target=";
    cin>>target;
    int hours[n];
    for(int i=0;i<n;i++){
        cin>>hours[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(hours[i]>=target){
            count++;
        }
    }
    cout<<count;

    return 0;
}