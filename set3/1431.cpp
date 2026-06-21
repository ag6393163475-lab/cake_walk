#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of candies=";
    cin>>n;
    int extraCandies;
    cout<<"enter extra candies=";
    cin>>extraCandies;
    int candies[n];
    for(int i=0;i<n;i++){
        cin>>candies[i];
    }
    bool arr[n];
    int maximum=candies[0];
    for(int i=0;i<n;i++){
        if(candies[i]>maximum){
            maximum=candies[i];
        }       
    }
    for(int i=0; i<n; i++){
        if(candies[i]+ extraCandies >=maximum ){
            arr[i]=true;
        }else{
            arr[i]=false;
        }

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}