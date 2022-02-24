#include<iostream>
using namespace std;

int getbit(int n,int pos){
    //1<<i=0100
    return((n&(1<<pos))!=0);
}
int setbit(int n,int pos){
    return(n|(1<<pos));
}
int clearbit(int n,int pos){
    int mask= ~(1<<pos);
    return (n&mask);
}
int updatebit(int n,int pos,int value){
    int mask= ~(1<<pos);
    n=n&mask;
    return (n|(value<<pos));
}
int main(){
    // cout<<getbit(5,2)<<endl;
    // cout<<setbit(5,1)<<endl;
    // cout<<clearbit(5,2);
    cout<<updatebit(5,1,1)<<endl;
    return 0;
}