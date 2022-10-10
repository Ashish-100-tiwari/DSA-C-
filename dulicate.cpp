#include <bits/stdc++.h>

using namespace std;

int main(){
    int n=9;
    int arr[n]={2,4,6,8,2,5,1,3,7};
    int frq[n+1]={0};
    for(int i=0;i<n;i++){
        frq[arr[i]]+=1;
    }
    for(int i=0;i<n;i++){
        cout<<frq[i]<<" "<<endl;
    }
}