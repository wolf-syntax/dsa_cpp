#include <iostream>
using namespace std;
int main() {
    int arr[5]= {1,2,3,4,5};
    int n =5;
    int start= 0;
    int end=n-1;
    int target= 5;
    while (start<=end)
    {int mid= start +(end -start)/2;
         if(target == arr[mid]){
        cout<<"target find: "<<arr[mid]<<" , at indx value : "<<mid<<endl;
        return 0;
 }else if(target>=arr[mid]){
        start = mid +1;
 }else if( arr[mid]>=target){
        end= mid-1;
    }
}
    return 0;
    
}