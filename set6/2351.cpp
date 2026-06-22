#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    int min=n;
    char x='\0';
    
     
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j]){
             
                if(j<min){
                    min=j;
                    x=s[i];
                }
                break;   
            }
                
        }
            
    }
    if(x != '\0')
        cout << x;
    else
        cout << "No repeated character";
   
              
    return 0;
}