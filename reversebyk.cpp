#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end){

    while (start<=end)
    {
        /* code */
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}
void rotatebyK(int arr[], int size, int k){

    reverse(arr,0,k-1);
    reverse(arr,k,size-1);
    reverse(arr,0,size-1);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int k =5;
    int size = sizeof(arr)/sizeof(arr[0]);
    rotatebyK(arr,size,k);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
        /* code */
    }
    
    

    return 0;
}