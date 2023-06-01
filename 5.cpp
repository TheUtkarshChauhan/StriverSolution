#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
/**
 * @brief 
 * 
 * 
 

 *****
 ****
 ***
 **
 *
 
 * 
 */
int main()
{
    int row;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j <row; j++)
        {
            /* code */
            if(j>=i)
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    return 0;
}