#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    long long n=1;
    while(n*n<=num){
        if(n*n==num){
            cout<<"true";
            return 0;
        }
        n++;
        
    }
    cout<<"false";
    return 0;
        
   
}