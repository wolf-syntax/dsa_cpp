#include<iostream>
#include<climits>
using namespace std;
int minimum_rotated_arr(int arr[],int n){
    int start = 0;
    int end = n-1;
    int ans = INT_MAX;
    while(start <=end){
        int mid = start+(end-start)/2;
        if(arr[start]<=arr[mid]){// ye bhi lik skta ho for min ; ans = min(ans,arr[start])dono me 
            if(ans>arr[start]){
           ans = arr[start];
            }start= mid+1;
        }else{
            if(arr[mid]<=arr[end]){
                if(ans>arr[mid]){
                    ans = arr[mid];
                }end= mid-1;
            }
        }
    }
    return ans;

}
int main (){
    int arr[7]={4,5,6,7,0,1,2};
int n =7;
int minimum = minimum_rotated_arr(arr,n);
cout<<"ans of mimnimum arr = "<<minimum<<endl;
return 0;
}