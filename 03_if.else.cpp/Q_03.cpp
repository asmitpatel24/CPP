#include<iostream>

// Q. Print wether the character is upper, lower or numeric 

using namespace std;
int main() {
    char ch;    
    cout<<"enter a character: ";
    cin>>ch;

    if(ch >= 'a' && ch <= 'z')
       {
        cout<<"char is of small letter"<<endl;
       } 

     else if(ch >= 'A' && ch <= 'Z')
       {
        cout<<"char is of upper letter"<<endl;
       } 
    //    else {
    //     cout<<"This is numer"<<endl;
    //    }

    if(ch >= '0'  && ch <= '9'){
        cout<<"This is of numeric";
    }
}
