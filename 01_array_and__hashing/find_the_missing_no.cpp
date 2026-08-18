// /*#include<iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     int arr[n]={1,2,4,5,6};
//     int total_sum = (n*(n+1))/2;
//     int arrsum = 0;
//     for(int i = 0;i<n-1;i++){
//         arrsum = arrsum + arr[i];
//    }
//    int missing_no= total_sum - arrsum ;
//    cout<<"missing no:"<< missing_no<<endl;
//    return 0;

// }*/
#include<iostream>
using namespace std;
int main(){
int n = 6;
int arr[n]= {1,2,3,5,6,8};
int xor1= 0;
int xor2 = 0;
for(int i = 0;i<n-1;i++){
    xor2 = xor2^arr[i];
}
for(int i = 0 ; i <=n; i ++){
    xor1 = xor1^i;
}
//final 
int missing_no= xor1^xor2;
cout<<"missing no :"<<missing_no<<endl;
return 0;


} 



