#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
    node(int val){
        data = val;
        next = nullptr;
    }node(){
            data = 0;
            next = nullptr;}

};

void insert_linklist(node*&head,int val){
    node*naya= new node(val);
    if(head == nullptr){
        head = naya;
        return;
    }
    node*temp = head;
    while ( temp ->next !=nullptr){
        temp = temp->next;
     }
    temp->next = naya;
}

void printlinklist(node*head){
    node*temp = head;
    while(temp!=nullptr){
       cout<<temp->data<<" "; 
       temp = temp->next;
}cout<<endl;
}
 void joinlinklist(node*list1,node*list2){
    if(list1 == nullptr){
        return;
    }
    node*temp = list1;
    while(temp->next != nullptr){
        temp = temp->next;
    } temp->next = list2;
}
void reverselinklist(node*&head){
    node*prev=nullptr;
    node*curr= head;
    node*forward=nullptr;
    while(curr!= nullptr){
        forward = curr->next;
        curr->next= prev;
        prev= curr;
        curr= forward;
    } head =prev;
    
}
int main (){
    node*head = nullptr;
    node*a= nullptr;
    node*b= nullptr;
    node*c = nullptr;

    insert_linklist(head,20);
    insert_linklist(a,30);
    insert_linklist(b,40);
    insert_linklist(c,50);
    joinlinklist(head,a);
    joinlinklist(head,b);
    joinlinklist(head,c);

    reverselinklist(head);
    printlinklist(head);
    return 0;
}
