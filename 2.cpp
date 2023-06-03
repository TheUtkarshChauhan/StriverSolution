#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the no of row: "<<endl;
    cin>>num;
    for (int i = 0; i < num; i++)
    {
        /* code */
        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout<<"*";
           
        }
        cout<<endl;
    }
    
    return 0;
}