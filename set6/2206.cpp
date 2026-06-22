#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n=";
    cin>>n;
    

    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    sort(nums,nums+n);
    for(int i=0;i<n;i+=2){
        if(nums[i]!=nums[i+1]){
            cout<<"false";
            return 0;
        }
    }
    cout<<"true";
    return 0;
}