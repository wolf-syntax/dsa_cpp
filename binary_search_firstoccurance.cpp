#include <iostream>
#include<algorithm>
using namespace std;
int main(){
int arr[6]= {1,2,4,11,11,6};
int n= 6;
int end=n-1;
int start = 0;
int ans = -1;
int target = 11;
std::sort(arr,arr+n);
while (start <=end){
    int mid = start +(end-start)/2;
    if( target == arr[mid]){
        ans = mid;
        end= mid-1;
    }else if(target>=arr[mid]){
        start = mid+1;
    }else{
        end = mid -1;
    }
}
cout<<"ans:"<<ans; 
return 0;
}









