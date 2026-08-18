#include<iostream>
#include<string>
using namespace std;
class Product{
public:
string name ;
int prise ;
Product(string b ,int a){
    name = b;
    prise =a;

}
void display_product(){
    cout<<"product name & prise : "<<name<<" ; "<<"ruprss rs:"<<prise<<endl;

}
};
class Electronic:public Product{
    public:
    int warrenty ;
    Electronic(string b,int a,int w):Product(b,a){
        warrenty = w;}

    void warrentydisplay(){
    cout<<"warrent of the product in year  :"<<warrenty<<endl;}

};
class Cloths:public Product{
    public:
    string size;
    Cloths(string b,int a,string s):Product(b,a){
        size = s;
    }
    void sizedisplay(){
    cout<<"product size is : "<<size<<endl;}
};
int main(){
   Electronic e1("smart watch",3000,1);
   e1.display_product();
   e1.warrentydisplay();
   cout<<"----------------------------"<<endl;
   Cloths c1("t-shirt",2000,"l");
   c1.display_product();
   c1.sizedisplay();
    return 0;

    
}
