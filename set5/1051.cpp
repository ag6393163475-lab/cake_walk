#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> heights(n);
    for(int i=0;i<n;i++){
        cin>>heights[i];
    }
    vector<int>expected = heights;
    sort(expected.begin(),expected.end());
    int count=0;
    for(int i=0;i<n;i++){
        if(expected[i]!=heights[i]){
            count++;

        }
    }
    cout<<count;
    return 0;
}