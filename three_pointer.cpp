#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n] = {1,4,1,4,2};
    //thre pointer apporach 
    int low= 0;
    int high = n-1;
    int mid = 0;
    while(mid<= high){
        if(arr[mid]==1){
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }else if( arr[mid]==2){
            mid++;
        }else if( arr[mid]== 4){
            swap(arr[mid],arr[high]);
            high--;}
            else{
                mid++;
            }
    }cout<<"sorted arry :";
    for(int i = 0; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}