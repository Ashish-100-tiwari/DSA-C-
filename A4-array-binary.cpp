#include<iostream>
using namespace std;
 //binary search 
int binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<mid){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"enter the size of the array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key ;
    cout<<"enter the key ";
    cin>>key;
    cout<<binarysearch(arr,n,key);
}