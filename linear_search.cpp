#include <iostream>
using namespace std;//find ()funtin bhi use kar sakte hai linersearch ki jgha  
int main(){
    int arr[5]= {10,23,45,67,89};
    int target= 100;
    bool findtarget= false; 
    for(int i = 0 ;i<5;i++){
        if(target== arr[i]){
             cout<<"target find index "<<i<<endl;
             findtarget = true;
             break;}
       }
    if(findtarget == false){
        cout<<"target not find "<<endl;
    }

} 



