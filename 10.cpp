#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
/**
 * @brief 
 * 

 * 
 **
 ***
 ****
 *****
 ****
 ***
 **
 *
 
 * 
 */
int main()
{
    int num;
    cout<<"Enter the no of rows(odd): "<<endl;
    cin>>num;
    for (int i = 0; i < (num/2); i++)
    {
        /* code */
        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout<<"*";
           
        }
        cout<<endl;
    }
    for (int i = num/2; i >= 0; i--)
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