#include <iostream>
using namespace std;
int main(){
    string a ="CAT";
    string b = "TAC";
    int n  = a.length();
    int seen[256] = {0};
    if(a.length() !=b.length()){
        cout<<"not an anagram"<<endl;
        return 0;
    }
    
    for(int i= 0 ; i<n;i++){
        seen[a[i]]++;
        seen[b[i]]--;
    }
    for(int i =0;i<256;i++){
        if(seen[i]!=0){
            cout<<"not"<<endl;
            return 0;
            
         }
        }
     
        cout<<"yes"<<endl;
        return 0;
       
    
    
        
    
}