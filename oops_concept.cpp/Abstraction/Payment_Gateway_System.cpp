#include<iostream>
using namespace std;
class payment_gateway {
    private:
    int bankbalance;
    int system_otp;
     bool verify_network(){
        return true;
     }
      bool check_otp(int otp){
        if(otp == system_otp){
            return true;
        }else{
        return false;}
      }
       bool deducted_balance(int amount){
        if(amount > 0 && amount <= bankbalance){
            bankbalance = bankbalance-amount;
            return true;

        }
        else return false;
       }

       public:
       void set_balance(int initalb,int enterotp){
        bankbalance = initalb;
        system_otp = enterotp;
       }
       void proces_start(int amount , int entered_otp){
        cout<<" payment process start for amount "<<amount<<endl;
         
         if(!verify_network()){
            cout<<"no singnal "<<endl;
         }
         if(!check_otp(entered_otp)){
            cout<<"not valid otp"<<endl;
            return;
         }
         if(!deducted_balance(amount)){
            cout<<"insuufisant  ballance "<<endl;
            return;
         }
         cout<<" payment sussec full : "<<amount<<endl;
         cout<<" remaning balance : "<<bankbalance<<endl;

       }


};
int main (){
    payment_gateway gpay;
    gpay.set_balance(20000,1223);
    gpay.proces_start(200,1234);
    gpay.proces_start(30000,1223);
    gpay.proces_start(200,1223);
    return 0;

}