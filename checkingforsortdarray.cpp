#include<bits/stdc++.h>
using namespace std;

int checkforSorted(int arr[], int size){


    for (int i = 0; i < size-1; i++)
    {

        if (arr[i]>arr[i+1])
        {
            return 1;
            /* code */
        }
        
        /* code */
    }
    return 0;
    
}

int main(){

    int arr[] = {1,2,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    if (checkforSorted(arr,size))
    {
        cout<<"Array is not Sorted::"<<endl;
        /* code */
    }else
    {
        cout<<"Array is Sorted::"<<endl;
    }
    
    
    return 0;
}