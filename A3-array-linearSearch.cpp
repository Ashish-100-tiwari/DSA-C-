#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"enter the size of the array ";
    cin>>n;
    int key;
    int a[n];
    cout<<"enter the element into the array";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter key which you want to find out ";
    cin>>key;
    //linear search
    for(int i=0;i<n;i++){
        if(a[i]==key){
            cout<<i;
        }
    } 
    return 0;
    
}