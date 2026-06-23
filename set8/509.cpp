#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    if(n==0) cout<<0;
        if(n==1) cout<<1;
        int a=0;
        int b=1;
        for(int i=2;i<=n;i++){
           int c=a+b; 
           a=b;
           b=c;
        }
        cout<<b;
    return 0;
}