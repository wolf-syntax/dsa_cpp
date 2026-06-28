#include <iostream>
using namespace std;
void revarry(int arr[],int start,int end){
    while (start <end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;

    }
    
}
int main (){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int n = 8;
    int d = 4;
    //function apply 
    revarry(arr,0,d-1);
    revarry(arr,d,n-1);
    revarry(arr,0 , n-1);
    // print
    cout<<"arry after rev:"<<endl;
    for(int i =0;i<n;i++) {
        cout<<arr[i]<<"";

    }
    cout<<endl;
    return 0;

}