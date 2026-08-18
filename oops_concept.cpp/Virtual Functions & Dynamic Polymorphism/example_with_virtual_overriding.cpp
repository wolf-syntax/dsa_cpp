#include<iostream>
using namespace std;
class Animal{
    public:
     virtual void sound(){
        cout<<"animal sound karta hai"<<endl;
    }
    };
    class Dog:public Animal{
        public:
        void sound(){
            cout<<"dog sound : bhaw bhaw "<<endl;

        }
    };
    int main(){
        Animal*ptr;
        Dog d1;
        ptr= &d1;
        ptr->sound();
       
        return 0;
    }
