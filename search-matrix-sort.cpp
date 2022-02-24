#include<iostream>
using namespace std;

int main(){
    int n,m;
    int m1[n][m];
    cin>>n>>m;
    int target;
    cin>>target;
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>m1[i][j];
        }
    }
    int r=0,c=m-1;
    bool found=false;
    while(r<n and c>=0){
        if(m1[r][c]==target){
            found=true;
        }
        if (m1[r][c]>target)
        {
            c--;
        }else{
            r++;
        }
        if(found){
            cout<<"element found";
        }else{
            cout<<"element not found";
        }
        
    }
}