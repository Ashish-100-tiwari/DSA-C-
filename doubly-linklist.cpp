#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
    node*prev;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insertatHead(node*&head,int val){
    node*n=new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n;
}

void insertatTail(node*&head,int val){
    node*n=new node(val);
    if(head==NULL){
        insertatHead(head,val);
        return;
    }
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void display(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void deleteatHead(node*&head){
    node*todelete=head;
    head=head->next;
    head->prev=NULL;
    delete todelete;
}

void deletion(node*&head,int pos){
    if(pos==1){
        deleteatHead(head);
        return ;
    }
    int count=1;
    node*temp=head;
    while (temp!=NULL&&count!=pos)
    {
        temp=temp->next;
        count++;
    }
        temp->prev->next=temp->next;
    if(temp->prev!=NULL)
    {
        temp->next->prev=temp->prev;
    }
    delete temp;

}

int main(){
    node*head=NULL;
    insertatTail(head,2);
    insertatTail(head,3);
    insertatTail(head,4);
    insertatTail(head,5);
    insertatTail(head,6);
    insertatTail(head,7);
    insertatTail(head,8);
    insertatTail(head,9);
    insertatTail(head,0);
    insertatTail(head,12);
    insertatTail(head,13);
    insertatTail(head,14);
    display(head);
    deletion(head,5);
    display(head);

}