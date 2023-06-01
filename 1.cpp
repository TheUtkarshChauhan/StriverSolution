#include<iostream>
#include<string>
#include<iomanip>

using namespace std;
int main()
{
    int num,num2;
    cout<<"Enter the no of rows and columns: "<<endl;
    cin>>num>>num2;
    for (int i = 0; i < num; i++)
    {
        /* code */
        for (int j = 0; j < num2; j++)
        {
            /* code */
            cout<<"*";
        }
        cout<<endl;

    }
    
    return 0;
}