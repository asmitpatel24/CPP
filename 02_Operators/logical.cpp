#include<iostream>
using namespace std;
int main() {
    int a=4, b=5;

    cout<<"The value of this logical AND operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical OR operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical NOT operator (!(a==b)) is:"<<(!(a==b))<<endl;

    return 0;

}