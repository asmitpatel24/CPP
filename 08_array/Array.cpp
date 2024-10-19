#include<iostream>
using namespace std;

int main() {

    // --**Example**--
    int marks[4]={55 , 56 , 57 , 58};
    int mathmark[4]={40 , 41 , 42 , 43};

    cout<<"these are marks "<<endl;
    cout<<marks [0]<<endl;
    cout<<marks [1]<<endl;
    cout<<marks [2]<<endl;
    cout<<marks [3]<<endl;

    //you can change the value of an array
    mathmark[1]=999;
    cout<<"these are mathMarks "<<endl;
    cout<<mathmark [0]<<endl;
    cout<<mathmark [1]<<endl;
    cout<<mathmark [2]<<endl;
    cout<<mathmark [3]<<endl;

    for(int i=0; i<4; i++)
    {
        cout<<"the value of mathMarks "<<i<<" is "<<mathmark[i]<<endl;
    }

}