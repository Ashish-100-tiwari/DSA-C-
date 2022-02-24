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

void insertatTail(node* &head,int val){
    node*n=new node(val);
    if(head==NULL){
        head=n;
        return ;
    }
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void insertatHead(node* &head,int val){
    node*n=new node(val);
    n->next=head;
    head=n;
}

bool search(node* head,int key){
    node*temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void deleteAtHead(node* &head){
    node*todelete =head;
    head=head->next;
    delete todelete;
}
void  deletion(node*&head,int val){
    if(head==NULL){
        return ;
    }
    if(head->next==NULL){
        deleteAtHead(head);
        return ;
    }
    node*temp=head;
    while (temp->next->data!=val)
    {
        temp=temp->next;
    }
    node*todelete =temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

node* reverse(node*&head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}

node* reverseRecursive(node*&head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    node*newhead=reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}

// reverse k node

node* reverse(node*&head,int k){
    node*prevptr=NULL;
    node*currptr=head;
    node*nextptr;
    int count=0;
    while(currptr!=0&&count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next=reverse(nextptr,k);
    }
    return prevptr;
}
// making of cycle 
void cyclemaking(node*&head,int pos){
    node*temp=head;
    node*startnode;
    int count=1;
    while(temp->next!=NULL){
        if(count==pos){
            startnode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startnode;
}

void removecycle(node*&head){
    node*slow=head;
    node*fast=head;
    do{
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);
    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}
//detect cycle 

bool cycle(node*head){
    node*slow=head;
    node*fast=head;
    while(fast->next!=NULL&&fast!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}

int main(){
    node* head=NULL;
    // insertatTail(head,1);
    // insertatTail(head,2);
    // insertatTail(head,3);
    // insertatTail(head,4);
    // insertatTail(head,5);
    // insertatTail(head,22);
    // insertatTail(head,21);
    // insertatTail(head,298);
    // display(head);
    // insertatHead(head,345);
    // display(head);
    // cout<<search(head,21)<<endl;
    // deletion(head,21);
    // display(head);
    // node*newhead=reverse(head);
    // display(newhead);
    // node*newhead=reverseRecursive(head);
    // display(newhead);
    // display(head);
    // int k=2;
    // node*newhead=reverse(head,k);
    // display(newhead);
}