#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
//pascal's triangle
/*
            1
        1   2    1
    1    3     3      1
*/

int main()
{
    int n;
    cout<<"Enter the no of 1's in pascal Triangle: "<<endl;
    cin>>n;
    int arr[n][n];
    //Brute Force
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            if (j ==0)
            {
                /* code */
                arr[i][j] =1;
            }else if(i==j){
                arr[i][j] = 1;
            }else{
                arr[i][j] = arr[i-1][j-1]+arr[i-1][j];
            }
            
        }
        

    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            
            
            if(i>=j)
        cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
        
    }
    
    
    return 0;
}