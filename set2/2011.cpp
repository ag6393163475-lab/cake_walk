#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string operations[n];
    for(int i=0;i<n;i++){
        cin>>operations[i];
    }
    int p=0;
    for(int i=0;i<n;i++){
        if(operations[i]=="++X" || operations[i]=="X++"){
            p++;
        }
        else{
            p--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<p<<endl;
    }
}
