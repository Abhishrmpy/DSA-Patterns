#include <iostream>
using namespace std;

int main(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<5-i; j++)
        cout<<" ";



        for(char name = 'A'; name<='A' + i -1; name++){
            cout<<name;
        }
        cout<<endl;
    }
}