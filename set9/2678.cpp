#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string details[n];
    for(int i=0;i<n;i++){
        cin>>details[i];
    }
    int count=0;
    for(int i=0;i<n;i++){ 
        int age=(details[i][11] - '0') * 10 + (details[i][12] - '0');
        if(age>60){
            count++;
        }
    }
    cout<<count;
    return 0;
}