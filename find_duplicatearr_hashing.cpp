 #include<iostream>
 using namespace std;
 int main(){
    int n = 5;
    int arr[n]= { 1,2,4,4,2};
    int hash[5] = {0,0,0,0,0};
    for(int i = 0 ; i < n ; i++){
        if (hash[arr[i]]==1){
            cout<<"duplicate no :"<<arr[i]<<endl;
        }
        hash[arr[i]]=1;
    }
    return 0;

 }
