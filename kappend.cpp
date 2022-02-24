#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;

    node(int val){
     data=val;
     next=NULL;
    }
};
int length(node* &head){
    int l=0;
    node*temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}
node* kappend(node* &head,int k){
    node* newHead;
    node*newTail;
    node*tail=head;
    int l=length(head);
    k=k%l;
    int count=1;
    while(tail->next!=NULL){
        if(count==l-k){
            newTail=tail;
        }
        if(count==l-k+1){
            newHead=tail;
        }
        tail=tail->next;
        count++;
    }
    newTail->next=NULL;
    tail->next=head;
    return newHead;
}


int main(){

}