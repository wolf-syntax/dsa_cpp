#include <iostream>
using namespace std;
int main(){
    int arr[8]={1,0,2,0,3,4,0,9};
    int n = 8;
    int i = 0;
    for(int j = 0 ;j<n;j++){
        if ( arr[j]!= 0){
            int temp = arr[i];
            arr[i]= arr[j];
            arr[j] = temp;
            i++;
        }

    }
    cout<<"new arry: "<<endl;
    for(int k =0;k<n;k++){
        cout<<arr[k]<<" ";

    }
    return 0 ;

}