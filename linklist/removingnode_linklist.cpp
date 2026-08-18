#include<iostream>
using namespace  std;
struct node{
    int data;
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
void insertlinklist(node*&head,int val){
    node*naya = new node(val);
    if(head == nullptr){
        head = naya;
        return;
    }
    node*temp =  head;
    while(temp->next != nullptr){
        temp = temp->next;
    }   temp->next = naya;
}
void printlinklist(node*head){
    node*temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}
node* detectcycle(node*head){
    node*slow = head;
    node*fast =head;
    while(fast  != nullptr && fast->next !=nullptr){
        slow =slow->next;
        fast =fast->next->next;
     
       if(slow == fast){
        
        node*temp = head;
        while(temp != slow){
           temp =  temp->next;
           slow =slow->next;
        }
        return slow;
       }
    }
       return nullptr;
} 

node* removenode(node*head){
    node*startnode = detectcycle(head);
     if(startnode == nullptr){
        return nullptr;
     }
     node*temp = startnode;
     while(temp->next !=startnode ){
        temp = temp->next;
     }
      temp ->next = nullptr;
      return temp;
}

int main(){
    node*head =nullptr;
    insertlinklist(head,10 );
    insertlinklist(head,20 );
    insertlinklist(head,30 );
    insertlinklist(head,40 );
    insertlinklist(head,50 );
    insertlinklist(head,60 );
    printlinklist(head);
    node*temp =head;
    while(temp->next != nullptr){
        temp = temp->next;
    } temp->next =head->next;
    detectcycle(head);
   node*first= removenode(head);
   cout<<" remove node is : "<<first->data<<endl;
   

    return 0;

}