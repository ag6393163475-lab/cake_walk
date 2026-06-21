#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of sentences=";
    cin>>n;

    string sentences[n];
    for(int i=0;i<n;i++){
        getline(cin, sentences[0]);
    }
    int store[n];
   
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=0; j<sentences[i].length(); j++){
            if(sentences[i][j]==' '){
                count++;           
            }  
        } 
        store[i]=count;  
        }
    int maximum = store[0];

    for(int i = 1; i < n; i++) {
        if(store[i] > maximum) {
            maximum = store[i];
        }
    }

    cout << "Maximum words = " << maximum;

    return 0;
        
        
        
}