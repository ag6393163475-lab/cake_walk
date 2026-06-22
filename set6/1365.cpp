#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int>copy=nums;
    sort(copy.begin(),copy.end());
    vector<int>result;
    for(int i=0;i<n;i++){
        int count=0;
        while(copy[count]!=nums[i]){
            count++;
                   
        }
        result.push_back(count);
    }
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";

    }
              
    
    
}