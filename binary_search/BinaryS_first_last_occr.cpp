#include <iostream>
#include<algorithm>
using namespace std;
/*function step to creat
1 int name_fun(arruments jobbhi type vale le kiye like  , arr,size,target,(int arr[,int n ,string s,etc]))
condition  jo bhi cobndition repate karne ho who 
like  bs _ while (start<=end){
mmid = start +(end-start)/2;
if bali saei condition like target == mid ,target>-mid,target<=mid 
then last  to return the vale you wnat like ans, then type return ans ;}*/
int first_ocur(int arr[],int n , int target){
    int end =n-1;
    int start = 0;
    int ans = -1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(target == arr[mid]){
            ans =mid;
            end= mid-1;
        }else if(target>arr[mid]){
            start = mid +1;
        }else{
            end = mid -1;
        }

    }
    return ans;
}
int last_ocur(int arr[],int n , int target){
    int end =n-1;
    int start = 0;
    int ans = -1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(target == arr[mid]){
            ans =mid;
            start= mid+1;
        }else if(target>arr[mid]){
            start = mid +1;
        }else{
            end = mid -1;
        }

    }
    return ans;
}
int main(){
    int arr[7]={1,2,3,44,44,46,44};
    int n = 7;
    int target = 44;
    std::sort(arr,arr+n);
    int firstAns= first_ocur(arr,n,target);
    int lastAns = last_ocur(arr,n,target);
    int total_no_occr = lastAns-firstAns+1;
   cout<<"ans1fast : "<<firstAns<<endl;
     cout<<"ans for last ocurr: "<<lastAns<<endl;
     cout<<"total no of occurs :"<<total_no_occr<<endl;
     return 0;
}