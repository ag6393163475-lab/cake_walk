#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n=";
    cin>>n;
    string words[n];
    for(int i=0;i<n;i++){
        cin>>words[i];
    }
    char x;
    cout<<"char=";
    cin>>x;
    int index[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<words[i].length();j++){
            if(words[i][j]==x){
                index[i]=i;
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<index[i]<<" ";
    }
   
        

    return 0;
}