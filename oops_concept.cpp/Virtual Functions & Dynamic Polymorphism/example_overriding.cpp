#include<iostream>
using namespace std;
class Animal{
    public:
    void sound(){
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
        Dog d1;
        d1.sound();
        return 0;
    }
