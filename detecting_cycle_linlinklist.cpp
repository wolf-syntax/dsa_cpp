#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
    node(int val){
        data= val;
        next = nullptr;
    }
    node(){
        data = 0;
        next = nullptr;
    }
};
void insertlinklist(node*&head,int val){
    node*naya = new node(val);
    if(head  == nullptr){
        head = naya;
        return;
    }
    node*temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next=naya;
}
bool detectcycle(node*&head){
    node*slow = head;
    node*fast = head;
    while(fast !=nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            return true;
        }
    }
    return false;
}
int main(){
    node*head = nullptr;
   

    insertlinklist(head,10);
    insertlinklist(head,20);
    insertlinklist(head,30 );
    insertlinklist(head,40 );
    insertlinklist(head,50 );
    insertlinklist(head,60 );
    node*temp = head;
    while(temp->next != nullptr){
        temp = temp->next;

     }temp->next= head->next;
   
    bool detect = detectcycle(head);
    cout<<"cyle is :"<<detect<<endl;
    return 0;

}