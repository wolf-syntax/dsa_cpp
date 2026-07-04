#include<iostream>
#include<algorithm>

using namespace std;
int functionmax(string s){
    int seen[256]= {0};
    int left = 0;
    int right = 0;
    int max_length = 0;
    int n = s.length();
    while (right<n)
    { char chr = s[right];
        if(seen[chr]==0){
            seen[chr]=1;
            max_length = max(max_length,right-left+1);
            right++; 
        }else{
            char leftchr = s[left];
            seen[leftchr] = 0;
            left++; 
        }
     }return max_length;
    }
     int main(){
        string s = "abcabcddacabcef";
        int max = functionmax(s);
        cout<<" output: "<<max<<endl;
        return 0;
     }