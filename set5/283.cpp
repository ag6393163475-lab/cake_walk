#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
    }    
    for(int j=0;j<n;j++){
        cout<<nums[j]<<" ";
    }
    return 0;
}