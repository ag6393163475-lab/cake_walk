#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int pref[n];
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    pref[0]=nums[0];
    for(int i=1;i<n;i++){
        pref[i]=nums[i]+pref[i-1];

    }
    for(int i = 0; i < n; i++) {
        cout << pref[i] << " ";
    }

    return 0;
   
}