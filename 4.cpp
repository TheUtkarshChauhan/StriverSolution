#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
/**
 * @brief 
 * 
 * 
 1
 22
 333
 4444
 55555
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
            cout<<i;
           
        }
        cout<<endl;
    }
    
    return 0;
}