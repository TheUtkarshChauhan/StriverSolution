#include <bits/stdc++.h>
using namespace std;
int maxSubArraySum(int arr[], int size){


    int sum = 0;
    int maxi =0;
    for (int i = 0; i < size;i++)
    {
        if (sum<0)
        {
            sum =0;
            sum =sum + arr[i];
            /* code */
        }else{
            sum = sum + arr[i];
            if (sum>maxi)
            {
                maxi =sum;
                /* code */
            }
            
        }
        
        /* code */
    }
    return maxi;
}

int main(){

    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = maxSubArraySum(arr,size);
    cout<<sum<<endl;

    return 0;
}