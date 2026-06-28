#include<iostream>
using namespace std;
int main(){
    int n = 10;
    int arr[n]={1,0,1,1,1,0,1,1,1,1};
    
    int count=0;
    int maxi = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]==1){
             count++;

            if ( count > maxi){
        maxi = count ;
         } 
        }
        else{
            count=0;
        }
    }
    
    
        
    cout<<" max no of 1 :"<<maxi<<endl;
    return 0 ;
}