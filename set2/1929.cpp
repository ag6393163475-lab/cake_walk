#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans[2*n];
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];    
    }
    for(int i=0;i<n;i++){
        ans[i]=arr[i];
        ans[i+n]=arr[i];
    }
    for(int i = 0; i < 2 * n; i++) {
        cout << ans[i] << " ";
    }

    
}