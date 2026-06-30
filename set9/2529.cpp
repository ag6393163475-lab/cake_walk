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
    int pos=0;
    for(int i=0;i<n;i++){
        if(nums[i]<0){
            count++;
        }
        else if(nums[i]>0){
            pos++;
        }
    }
    int mx=max(count,pos);
    cout<<mx;
   
}