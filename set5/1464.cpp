#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int maximum=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            maximum=max(maximum,(nums[i]-1)*(nums[j]-1));
        }
            
    }
    cout<<maximum;
    return 0;
}
