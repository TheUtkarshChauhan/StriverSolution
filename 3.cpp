#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
/**
 * @brief 
 * 
 * 
 1
 12
 123
 1234
 12345
 * 
 */
int main()
{
    
    int row;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    
    for (int i = 1; i <= row; i++)
    {
        /* code */
        for (int j = 1; j <= i; j++)
        {
            /* code */
            cout<<j;
           
        }
        cout<<endl;
    }
    
    return 0;
}