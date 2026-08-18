#include<iostream>
using namespace std;
int main(){
    int arr[6]={9,2,8,4,5,6};
    int smallest = INT8_MAX;
    int second_smallest  = INT8_MAX;
    for(int i = 0;i<6;i++){
        if(arr[i]<smallest){
            second_smallest = smallest;
            smallest = arr[i];

        }else if(arr[i]>smallest && arr[i]<second_smallest){
            second_smallest = arr[i];
            
        }
    } 
     cout<<"smallest no :"<<smallest<<endl;
     cout<<"second smallest no :"<<second_smallest<<endl;
     return 0;
    
}

