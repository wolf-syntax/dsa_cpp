#include<iostream>
using namespace std;
class Calculate_Area{
    public:
    void calculate(double radius){
        double area = 3.14*radius*radius;
        cout<<" input 1  area of circle : "<<area<<endl;

    }
    void calculate(int a,int b){
        int area = a*b;
        cout<<"[int ,input2]    area of rectangle is : "<<area<<endl;
    }
     void calculate(double a,double b){
        double area = a*b;
        cout<<" [double, input2]   area of rectangle is : "<<area<<endl;
    }
     void calculate(int side){
        int area =side*side ;
        cout<<" [int 1 input]    area of squre is : "<<area<<endl;
    }
};
int main (){
    Calculate_Area c1;
    c1.calculate(10);
    c1.calculate(11.2,21.3);
    c1.calculate(12,34);
    c1.calculate(10.0);
    return 0;
}