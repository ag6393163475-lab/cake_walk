#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];                                                                           
    }
    sort(nums ,nums+n);
    if(n<=2){
        cout<<-1;
    }else{
        cout<<nums[1];
    }
    return 0;
}