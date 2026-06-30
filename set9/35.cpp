#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cout<<"target=";
    cin>>target;
    bool found = false;
    for(int i=0;i<n;i++){
        if(nums[i]>=target){
            cout<<i;
            found = true;
            break;

        }
                
    }
    if (!found) {
        cout << n;
    }

       
    return 0;
}