#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cout<<"s=";
    cin>>s;
    string words[n];
    for(int i=0;i<n;i++){
        cin>>words[i];
    }
    if(n!= s.length()) {
        cout<<"false";
    }
        for(int i=0;i<n;i++){
            for(int j=0;j<words[i].length();j++){
                if(words[i][0]!=s[i]){
                    cout<<"false";
                }
            }   
        }
        cout<<"true";

}