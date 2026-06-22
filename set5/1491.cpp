#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int salary[n];
    for(int i=0;i<n;i++){
        cin>>salary[i];
    }
    double sum=0;
    sort(salary, salary+n);
    for(int i=1;i<n-1;i++){
        sum+=salary[i];
    }
    cout<<sum/(n-2); 
    return 0;
}