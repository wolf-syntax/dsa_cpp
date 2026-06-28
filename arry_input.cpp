#include <iostream>
using namespace std;
int main (){
    // array me input dalna hai 
    int dsa_marks[5];
    cout<<"enter all 5 sub marks "<<endl;
    for(int i=0;i<5;i++){
        cin>>dsa_marks[i];

    }
    cout<<"print all sub marks "<<endl;
    for(int i =1;i<5;i++){
        cout<<"marks "<<i<<" :"<<dsa_marks[i]<<" ; ";
    }
    int hights_marks =dsa_marks[0];
    for(int i=1;i<5;i++){
        if (dsa_marks[i]> hights_marks){
            hights_marks =dsa_marks[i];

        }
    }
    cout<<"high"<<hights_marks<<endl;
    ;

    return 0;
}