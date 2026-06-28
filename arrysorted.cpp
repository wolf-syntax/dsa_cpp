#include <iostream>
using namespace std;
int main(){
    int arr[5]= { 1,2,68,7,8};
    bool sort = true;
    for(int i = 0 ; i < 4; i ++){
        if(arr[i]>arr[i+1]){
            sort = false;
            break;
        }
    }
        if(sort == true){
            cout<<"arry sorted"<<endl;
            
        }else{
            cout<<"not sorted"<<endl;
        }
    
    return 0 ;
}