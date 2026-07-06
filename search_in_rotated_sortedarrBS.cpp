#include<iostream>
using namespace std;
int srotated(int arr[],int n,int target){
    int start = 0;
    int end= n-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(target == arr[mid]){
            return mid ;
        }
        if(arr[start]<=arr[mid]){    //ye check kara kinleft hiisa sort hai ya nahi 
            if(target>=arr[start]&& target<=arr[mid]){ // ab ye check kara ki left arry me target hai ya nahi 
                    end = mid -1;                           
            }else {
            start = mid+1;
        }
        }else{
            if(target>=arr[mid]&& target<=arr[end]){
                start = mid+1;
            }else{
                end=mid-1;
            }
        }
    }
    return -1;// target nhainmila es liye -1 lagaya 
}
int main (){
    int arr[7]= {4,5,6,7,0,1,2};
    int n =7;
    int target= 0;
    int ans = srotated(arr,n,target);
    cout<<"ans of rotated arr :"<<ans<<endl;
    return 0 ;
}