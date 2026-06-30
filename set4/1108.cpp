#include<iostream>
using namespace std;
int main(){
    string address;
    cin>>address;
    string ans="";
    for(int i=0;i<address.size();i++){
        if(address[i] == '.'){
            ans+="[.]";
        }else{
            ans+=address[i];
        }
    }
    cout<<ans;
    return 0;
}