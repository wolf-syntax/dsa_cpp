  #include<iostream>
  using namespace std;
  int binarysearch(int arr[],int n , int target){
    int start = 0;
    int end = n-1;
    while (start<= end){
        int mid = start + (end-start)/2;
        if(target ==arr[mid]){
            return mid;
            mid++;
        }else if(target>=arr[mid]){
            start= mid+1;

        }else if( target<=arr[mid]){
            end = mid-1;
        }
    }
    return start;// target mil gya ya fir nahi mila to uski position indx ke liye start use kra 
  }
  int main(){
    int arr[5]={1,2,4,5,6};
    int n = 5;
    int target = 0;//also check for 7,0,3etc
    int ans = binarysearch(arr,n,target);
    cout<<"ans  index is : "<<ans<<endl;
    return 0;
  }