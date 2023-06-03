#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
/**
 * @brief 
 * 
 * 
 

 12345
 1234
 123
 12
 1

 
 * 
 */
int main()
{
    int row;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    for (int i = row; i >=1; i--)
    {
        /* code */
        
        for (int j = 1; j <=i; j++)
        {
            /* code */
            
            cout<<j;
            
        }
        cout<<endl;
        
    }
    
    return 0;
}