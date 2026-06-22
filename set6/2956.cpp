#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n=";
    cin>>n;
    int nums1[n];
    for(int i=0;i<n;i++){
        cin>>nums1[i];
    }
    int m;
    cout<<"m=";
    cin>>m;
    int nums2[m];
    for(int i=0;i<m;i++){
        cin>>nums2[i];
    }
    int answer1=0;
    int answer2=0;
    for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                    answer1++;  
                    break;  
                }
            }
        }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(nums2[i]==nums1[j]){
                answer2++;  
                break;  
            }
        }
    }         
    cout << answer1 << " " << answer2;
}
