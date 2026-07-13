/*sbse phale fun me node*&head and int val dalo 
fir naya node bnao  node* New = new node(val) 
fir if lago or checjk karo ki head == nullptr hai 
fir head= New karo
return kaedo  
iske badd loop  whala llogic lgao 
 node*temp = head;
 while (temp->!= nullptr)
  
  temp = temp ->next;
  ye insert ka hi part hai 
  print karne ke liye alag se fun bano 
            */



#include<iostream>
using namespace std;
struct node
{int data;
    node*next;
    node(int val){
        data = val;
        next = nullptr;
}
    node(){
        data =0;
        next= nullptr;
}
};


void linklist_insert(node*&head , int val){
    node*naya = new node(val);
    if(head == nullptr){
        head= naya;
        return;
}
  node* temp = head;
  while ( temp->next != nullptr){
    temp = temp->next;
  }
  temp->next= naya;
}


void printlist(node*head){
     node* temp = head;
  while ( temp != nullptr){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<endl;
}
void joinlinklist(node*list1,node*list2){
    if(list1== nullptr){
        return;
    }
        node*temp = list1;
        while(temp->next!=nullptr){
            temp = temp->next;
        }
        temp->next = list2;
     
}
int main(){
    // alag alag name jase a,b,c,d ke leye bhi nullptr bna na ho ga or unhe print karne keliye bhi ptinfun alag alag karna hoga 
    
//    node*head = nullptr;
//     linklist_insert(head,10);
//      linklist_insert(head,20);
//       linklist_insert(head,30);
//        linklist_insert(head,40);

//        printlist(head);
node* a = nullptr;
    node* b = nullptr;
    node* c = nullptr;
   node*head = nullptr;
    linklist_insert(head,10);
     linklist_insert(a,20);
      linklist_insert(b,30);
       linklist_insert(c,40);
       joinlinklist(head,a);
       joinlinklist(head,b);
       joinlinklist(head,c);
       printlist(head);
   return 0;
}