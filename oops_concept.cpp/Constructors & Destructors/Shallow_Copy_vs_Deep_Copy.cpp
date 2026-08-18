#include<iostream>
#include<cstring>
using namespace std;
class Mystring {
    private:
    char*str;
    public:
    Mystring(const char*val){
        str = new char(strlen(val)+1);
        strcpy(str,val);
        cout<<" new string banayi  : "<<str<<endl;

    }
    Mystring(const Mystring&source){
        str= new char(strlen(source.str)+1);
        strcpy(str,source.str);
        cout<<" nayi  memory  of str  banakar  : "<<str<<"  copy kiya "<<endl;

    }
    void dispaly(){
        cout<<" string data :"<<str<<endl;
    }

    ~Mystring(){
        cout<< " deleting memory & dta of  str :"<<str<<endl;
        delete[] str;
    }

};
int main(){
    Mystring s1 = "greek";
    Mystring s2 = s1;
    cout<<"---------display sring-------------"<<endl;
    s1.dispaly();
    s2.dispaly();
    return 0;

}