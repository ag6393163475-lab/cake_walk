#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%3==0){
            continue;
        }else if(arr[i]%3==1){
            arr[i]=arr[i]-1;
            count++;
        }else{
            arr[i]=arr[i]+1;
            count++;
        }
    }
        cout<<count;
    
    return 0;
}
