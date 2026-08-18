#include<iostream>
using namespace std;
class car {
    public:
    string brandname;
    int speed;
     void display(){
        cout<<"brandname : "<<brandname<<" ;"<<"speed :"<<speed<<"km/hr"<<endl;
     }
};
int main (){
    car car2;
    car2.brandname = "honda";
    car2.speed = 200;
    car2.display();
    return 0;
}