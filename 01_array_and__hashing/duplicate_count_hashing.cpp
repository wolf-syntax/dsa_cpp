#include<iostream>
using namespace std;
int main (){
    int n = 6;
    int arr[n]= {1,2,1,3,4,3};
    int hash[5]={0,0,0,0,0};
    for(int i = 0 ; i< n ; i ++){
        hash[arr[i]]++;
       
    }
    for (int i = 0; i <5; i++)
    {
         if(hash[i]>0 ){
            cout<<"duplicate no : "<<i<<"comes "<<hash[i]<<"time"<<endl;
        }
    }
    
    return 0;
}