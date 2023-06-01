#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the no of row: "<<endl;
    cin>>num;
    int flag =1;
    for (int i = 0; i < num; i++)
    {
        /* code */
        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout<<flag<<" ";
           flag++;
        }
        cout<<endl;
    }
    
    return 0;
}