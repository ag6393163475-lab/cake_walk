#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nums1[n];
    for(int i=0;i<n;i++){
        cin>>nums1[i];
    }
    int nums2[n];
    for(int i=0;i<n;i++){
        cin>>nums2[i];
    }
    sort(nums1 , nums1+n);
    sort(nums2 , nums2+n);
    cout<<nums2[0]-nums1[0];
    return 0;
}
