#include <iostream>
using namespace std;
int main() {
    int n = 5;
int arr[n]={1,4,3,7,2};
int left = 0;
int right = n-1;
while (left < right){
    swap(arr[left],arr[right]);
    right--;
    left++;
}
cout<<"arry : "<<endl;
for(int i = 0 ; i < n ; i ++){
cout<<arr[i]<<", " ;
}
return 0;

}
