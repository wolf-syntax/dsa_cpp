#include<iostream>
#include<string>
using namespace std;
class Vechile {
    public :
    string brand = "tata";
    void sound (){
        cout<<"boom booom car sound"<<endl;
        
    }
};
    class Car: public Vechile {
public:
    
    string model = "safari";
    };


int main (){
    Car mycar;
    mycar.sound();
    cout<<" car details brand : "<<mycar.brand<<" ; model : "<<mycar.model<<endl;
    return 0;

}