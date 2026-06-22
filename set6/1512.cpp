#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]==nums[j]){
                count++;
             
            }
        }
    }
    
    cout<<count;
    return 0;

   
}