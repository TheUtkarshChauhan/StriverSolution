#include <bits/stdc++.h>
using namespace std;

void leftRotateOne(int arr[], int size){

    int temp = arr[0];
    for (int i = 0; i < size-1; i++)
    {
        /* code */
        arr[i]=arr[i+1];
    }
    arr[size-1] = temp;
}


int  main(){

    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    leftRotateOne(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
        /* code */
    }
    

    return 0;
}