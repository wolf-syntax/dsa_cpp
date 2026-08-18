#include <iostream>
using namespace std;
struct node
{ int data;
    node*next;
    node(int val){
        data = val;
        next = nullptr;
    }
    node(){
        data = 0;
        next = nullptr;
    }
 };
 void insretlinklist(node*&head, int val  ){
    node*naya = new node(val);
    if(head == nullptr){
        head = naya;
        return;
    }
    node*temp =head;
    while (temp->next != nullptr){
        temp= temp->next;
    }temp->next = naya;
 }
  
 void printlinklist(node*head){
    node*temp = head;
    while(temp!=nullptr){
      cout<<temp->data<<" ";
      temp = temp->next;
    }cout<<endl;
 }
  node*getmid_linklist(node*&head){
    node*slow = head;
    node*fast=head;
    while(fast!= nullptr&&fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
  }
   int main (){
    node*head = nullptr;
    insretlinklist(head,10);
    insretlinklist(head,20);
    insretlinklist(head,30);
    insretlinklist(head,40);
    insretlinklist(head,50);
    insretlinklist(head,60);
   node*get_mid = getmid_linklist(head);
    printlinklist(head);
    cout<<"get mid value is : "<<get_mid->data<<endl;
    return 0;
   }
