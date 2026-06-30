#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int grid[n][m];
    for(int i=0;i<n;i++){
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]<0){
                    count++;
                }
            }
        }
        cout<<count;
    return 0;
}