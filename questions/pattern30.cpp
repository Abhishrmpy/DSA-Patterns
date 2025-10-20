#include <iostream>
using namespace std;
int main()
{
    int row;
    int col; 
    int n;
    cout<<"Enter the number of row:";
    cin>>n;

    for(int row=n; row>=1; row--)
    {
        // print *
        for(col=1; col<=row; col++)
        cout<<"* ";
        // // print space
        for(col=1; col<=2*n-2*row; col++)
        cout<<" ";
        // print *
        for(col=1; col<=row; col++)
        cout<<"* ";

        cout<<endl;
    }

    for(int row=1; row<=n; row++)
    {
        // print *
        for(col=1; col<=row; col++)
        cout<<"* ";
        // // print space
        for(col=1; col<=2*n-2*row; col++)
        cout<<" ";
        // print *
        for(col=1; col<=row; col++)
        cout<<"* ";

        cout<<endl;
    }


  
}