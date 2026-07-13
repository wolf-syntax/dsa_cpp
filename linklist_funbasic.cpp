#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
    node(){
        data = 0;
        next = nullptr;}
    node(int val){
        data = val;
        next = nullptr;
    }
};
void linklist(node*head){
    node*temp =head;
    while(temp!= nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
} int main (){
    node*head= new node(0);
    node*first=new node(10);
     node*second=new node(20);
      node*third=new node(30);
      head->next= first;
      first ->next= second;
      second->next=third;
      linklist(head); 


}