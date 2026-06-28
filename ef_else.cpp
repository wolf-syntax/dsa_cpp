#include<iostream>
using namespace std ;
int main(){
    int oops_marks;
    int tafal_marks;
    cout<<"enter oops marks "<<endl;
    cin>>oops_marks;
    cout<<"enter tafak marks "<<endl;
    cin>> tafal_marks;
    int total_marks = oops_marks +tafal_marks;
    cout<<"total marks:"<<total_marks<<endl;
    if(total_marks > 60){
        cout<<"pass";
     }
      else{
            cout<<"fali";
    
        }
    
return 0;



}