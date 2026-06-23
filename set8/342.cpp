#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n <= 0) {
        cout<<"false";
    }

    while (n % 4 == 0) {
        n /= 4;
    }

    if(n==1){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}