#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the no of row: "<<endl;
    cin>>num;
        int flag = 0;
    for (int i = 0; i < num; i++)
    {
        /* code */
        flag =1-flag;
        int innerflag = flag;
        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout<<innerflag;
            innerflag =1-innerflag;
           
        }
        cout<<endl;
    }
    
    return 0;
}