#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter size of the array";
    cin>>n;
    int a[n];
    int minn= INT_MAX;
    int maxn= INT_MIN;
    cout<<"enter the element in the array ";
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>maxn){
            maxn=a[i];
        }
        if(a[i]<minn){
            minn=a[i];
        }
    }
    cout<<"maximum number in the array "<<maxn<<endl;
    cout<<"minimum number in the array"<<minn;
    return 0;
}