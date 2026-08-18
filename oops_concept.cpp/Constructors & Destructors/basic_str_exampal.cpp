#include<iostream>
#include<string>
using namespace std;
class Car{
    public:
    string brand;
    int price;

    Car(){
        brand = "no brand";
        price = 0;
        cout<<" car brand and price : "<<brand<<" : "<<price<<endl;

    }
    Car(string b,int a){
        brand = b;
        price = a;
        cout<<" car brand and price : "<<brand<<" : "<<price<<endl;
    }
    Car(Car&orignalcar){
        brand = orignalcar.brand;
        price = orignalcar.price;
        cout<<"  copy car brand and price : "<<brand<<" : "<<price<<endl;
    }
    ~Car(){
        cout<<"distructor  memory clean of dta of car name : "<<brand<<endl;
    }
};
int main (){
    cout<<"---------process start -----------"<<endl;

    Car car1;
    Car car2("bmw",100000);
    Car car3(car2);
    cout<<"---------prcess end  -----------"<<endl;
    return 0;
}