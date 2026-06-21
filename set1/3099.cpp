#include<iostream>
using namespace std;
int main(){
    int n; int m;
    cin>> n>>m;
    int sum=0;
        int sum1=0;
        for(int i=1;i<=n;i++){           
            if(i%m==0){  
                sum1+=i;
            }else{               
                sum+=i;               
            }
        }
        cout<<sum-sum1;
    
    return 0;
}
