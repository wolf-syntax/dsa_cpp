#include <iostream>
using namespace std;
int main(){
    int n = 7;
    int arr[n]={1,2,3,4,1,4,3};
    int ans = 0;
    for(int i = 0;i<n;i++){
        ans ^= arr[i];
        

    }
    cout<<" ans :"<<ans<<endl;
    return 0;
}
