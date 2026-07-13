#include<iostream>
using namespace std;
struct node
{ int data;
    node*next;
     node(){
        data =0;
        next = nullptr;      }
        node(int val){
            data =val;
            next = nullptr;
        }
       
};
int main (){
     node*naya_node = new node(10);
    // cout<<naya_node->data<<endl;
     //addig mor nodes 
      node*second_node= new node(20);
     node*third_node = new node(30);
      naya_node->next = second_node;
     second_node->next = third_node;
    //  cout<<naya_node->next->data<<endl;
    //  cout<<second_node->next->data<<endl;
     // link list ko loop se chlana 
     node*temp = naya_node;
     while (temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp-> next;
     }
     
     return 0;


}

