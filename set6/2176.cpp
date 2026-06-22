#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n=";
    cin>>n;
    int k;
    cout<<"k=";
    cin>>k;

    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]==nums[j]){
                if((i*j)%k==0){
                count++;
                }

            }
        }

    }
    cout<<count;
        
    return 0;
}