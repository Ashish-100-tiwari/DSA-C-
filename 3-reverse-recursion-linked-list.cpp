// reverse linked list by using resursion  method 
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
// void function to insert the element from the tail  
void insertAtTail(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
// void function to display the linked - list 
void display(node* &head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
//reverse linked list function 
node* ReverseRecursion(node* &head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    node* newhead=ReverseRecursion(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
int main(){
    node*head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    node*newhead= ReverseRecursion(head);
    display(newhead);
}