#include <iostream>
using namespace std;
struct node{
    int data;
    node*next;
    node(int val){
        data = val;
        next = nullptr;
    }
    node(){
        data= 0;
        next= nullptr;
    }
};
void insertlinklist(node*&head,int val){
    node*naya = new node(val);
    while(head == nullptr){
        head = naya;
        return;
    }
     node*temp =head;
     while(temp->next != nullptr){
        temp =temp->next;
     } temp->next =naya;

}
void printlinklist(node*head){
    node*temp =head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp =temp->next;
    } cout<<endl;
}
  node*reversefun(node*head){
    node*prev= nullptr;
    node*curr= head;
    node*forward= nullptr;
    while(curr!=nullptr){
        forward =curr->next;
        curr->next = prev;
        prev = curr;
        curr= forward;
    }
    return prev;
  }
  node* middlefun(node*head){
    node*slow=head;
    node*fast =head;
    while(fast != nullptr && fast->next != nullptr){
        slow =slow->next;
        fast = fast->next->next;
    }return slow;
  }
  bool palidreon(node*head){
    node*mid = middlefun(head);
    node*head2= reversefun(mid->next);
    while(head2!=nullptr){
        if(head->data !=head2->data){
            return false;
        }
        head = head->next;
        head2=head2->next;
    }
    return true;
   }
   int main (){
    node* head =nullptr;
    insertlinklist(head,10 );
     insertlinklist(head,20 );
      insertlinklist(head,30 );
       insertlinklist(head,20 );
        insertlinklist(head,10 );
        printlinklist(head);
        bool first= palidreon(head);
        cout<<" is palidron : "<<boolalpha<<first<<endl;
        return 0;
   }