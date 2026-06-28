#include<iostream>
using namespace std;
int main (){
    int arr[5]={1,8,4,2,6};
    int largest = -1;
    int second_largest = -1 ;
    for(int i = 0 ; i<5; i++){
        if(arr[i]> largest ){
            second_largest = largest ;
            largest = arr[i];

        }
        else if(arr[i]<largest && arr[i]>second_largest){
            second_largest = arr[i]; 
        }
    }
    cout<<"sabse largest no :"<<largest<<endl;
    cout<<"second largest no :"<<second_largest<<endl;
    return 0 ;

}
