#include<iostream>
using namespace std;
int main(){
    int n = 8;
    int arr[n] = {1,3,5,7,8,9,11,13};
    int hasharr[13]= {0,0,0,0,0,0,0,0};
    for (int i = 0; i < n; i++)
    {
      hasharr[arr[i]]=1;
    }
    for (int i = 0; i < 13; i++)
    {
        if (hasharr[i]==0)
        {
            cout<<"missing no : " <<i<<endl;
        }
        
    }
    return 0;
    
    

}