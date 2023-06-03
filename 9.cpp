#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
/**
 * @brief 
 * 
 * 
 *              *
            *   *   *
        *   *   *   *   *
        *   *   *   *   *
 *          *   *   *
                *

 
 * 
 */
int main()
{
    int row;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    for (int i = 1; i <= row/2; i++)
    {
        /* code */
        for (int j = 1; j <= row/2-i; j++)
        {
            /* code */
            cout<<" ";
            
            
        }
        for (int k = 1; k <= i*2-1; k++)
            {
                /* code */
                cout<<"*";
            }
        cout<<endl;
        
    }
    for (int i = row/2; i >=1; i--)
    {
        /* code */
        for (int j = 1; j <= row/2-i; j++)
        {
            /* code */
            cout<<" ";
            
            
        }
        for (int k = 1; k <= i*2-1; k++)
            {
                /* code */
                cout<<"*";
            }
        cout<<endl;
        
    }
    
    
    return 0;
}