#include <iostream>
using namespace std;
int main(){
    string a = "1221";
    int left = 0;
    int right = a.length()-1;
    while (left<right){
     if ( a[ left]!= a[right]){
        cout<<"not palindrome";
        return 0;
    }
     left++;
        right--;}
        cout<<"yes it is a palindrome";
        return 0;

}
 


 
 
    

