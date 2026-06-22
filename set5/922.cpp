#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int even=0;
    int odd=1;
    while(even<n && odd<n){
        if(nums[even]%2==0){
            even+=2;
        }else if (nums[odd]%2!=0){
            odd+=2;
        }else{
            swap(nums[even],nums[odd]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}