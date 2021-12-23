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
//void function to insert at head 
void insertAtHead(node* &head, int val){
    node*n =new node(val);
    n->next=head;
    head=n;
}
// bool search function 
bool search(node* &head,int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
// void function for deletion of node
void deletion(node* &head,int val){
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
// void function to delete from head 
void deleteAtHead(node* &head){
    node* todelete =head;
    head=head->next;
    delete todelete;
}
// call each function one by one 
int main(){
    node*head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    insertAtHead(head,0);
    display(head);
    cout<<search(head,9)<<endl;
    deletion(head,5);
    deleteAtHead(head);
    display(head);
}