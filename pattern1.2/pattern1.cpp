/*
Question:
Write a C++ program to print the following pattern using nested loops:

*****
*****
*****
*****
*****

Implement the pattern printing logic inside a function called print1().
*/
#include <iostream>
using namespace std;
void print1(){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    print1();
}