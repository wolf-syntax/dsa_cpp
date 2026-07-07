#include <iostream>
using namespace std;
int function_mountain(int arr[],int n){
    int start= 0;
    int end = n-1;
    while(start<end){
        int mid = start+(end - start)/2;
        if(arr[mid]<arr[mid+1]){
            start = mid+1;
        }else {  // or we can wiret ( arr[mid]>arr[mid+1]) but ya to ustarna hai ya chadna hai tho else se kam hojye ga   
            end = mid;
          }
    }
    return arr[end];
}
int main (){
    int arr[6]={1,2,3,8,6,5};
    int n = 6;
    int ans =function_mountain(arr,n);

    cout<<" peak value of arry indx is : "<<ans<<endl;
}
