#include<iostream>
#include<string>
using namespace std;
class Employee{
    public:
    virtual void displaysalry() =0;
virtual ~Employee() {};

};
class Fulltime:public Employee{
    private:
    string name;
    int   monthsalery;
    double bonus;
    public:
    Fulltime(string n,double m,double b){
        name =n;
        monthsalery = m;
        bonus = b;
}
    void displaysalry() override{
        double totalsalry = monthsalery+bonus;
        cout<<"name : "<< name<<" ; total salrary : $"<<totalsalry<<" -> fulltime"<<endl;
    }
};
class Parttime:public Employee{
    private:
    string name;
    int   hourRate;
    double workedhr;

    public:

    Parttime(string n,double h,double w){
        
        name =n;
        hourRate = h;
        workedhr = w;
}
    void displaysalry() override{
        double totalsalry = hourRate*workedhr;
        cout<<"name : "<<name<<" ; total salrary  : $"<<totalsalry<<" -> parttime"<<endl;
    }
};
int main(){
  Employee* emp1 = new Fulltime("aman",1000,100);
  Employee* emp2 =new Parttime("pulkit",50,5);
  emp1->displaysalry();
  emp2->displaysalry(); 
    return 0;
}
