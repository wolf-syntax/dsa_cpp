#include <iostream>
using namespace std;
int main(){
    int arr[5]= {1,5,3,4,8};
    int max_sum =0;
    int curr_sum = 0;
    int k = 3;
    for(int i = 0 ;i<k;i++){
        curr_sum += arr[i] ;
    }
    max_sum= curr_sum;
    for (int  i = k; i < 5; i++)
    { curr_sum = curr_sum+ arr[i]-arr[i-k];
      if(curr_sum>max_sum){
        max_sum  = curr_sum;
        }
    }
    cout<<"max sum :"<<max_sum<<endl<<"curr sum"<<curr_sum<<endl;
    return 0;
    
}