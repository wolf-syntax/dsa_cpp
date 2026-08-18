#include<iostream>
using namespace std;
class ATM_machine {
    private :
    int atm_pin ;
    int balance;
     public :
     ATM_machine(){
     balance = 50000;
     atm_pin = {1234};}
     
     void check_balance(int entered_pin){
        if(entered_pin == atm_pin){
            cout<<"your balance is : "<<balance<<endl;
        }
        else{
            cout<<" invalid pin "<<endl;
        }
     }
      void withdraw(int amount , int entered_pin){
        if(entered_pin != atm_pin){
            cout<<" tranction failed due to invaled pin "<<endl;}
            else if(amount <= 0){
                cout<<" enter minimum amount = 100 "<<endl;
             }
             else if(amount>balance){
                cout<<" insuffsent balance "<<endl;
             }
             else{
                balance = balance - amount ;
                cout<<" tranction amount is : "<<amount <<endl;
                cout<<" remaning balance is : "<<balance<<endl;
             }
        
      }
};
int main (){
    ATM_machine myatm;
    myatm.check_balance(1115);
    myatm.check_balance(1234);
    myatm.withdraw(200000,1234);
    myatm.withdraw(10000,1234);
    return 0;
}