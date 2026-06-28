#include <iostream>
using namespace std;
int main(){
    int arr[6] = {1,1,2,2,3,3};
    int first = 0;
    for(int i = 0 ; i < 6; i ++){
        if(arr[first] != arr[i]){
            first ++;
            arr[first] = arr[i];
        }
    }
    cout<<"new arry element :"<<endl;
    for( int k =0; k <= first ; k ++){
        cout<<arr[k]<<" ";
    } cout<< endl; 
    
    return 0;
}