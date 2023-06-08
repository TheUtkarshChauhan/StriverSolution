#include<bits/stdc++.h>
using namespace std;


int secondLargest(int arr[], int size){
    int maxi = *max_element(arr,arr+size);
    int secondlarge =0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]<maxi && arr[i]>secondlarge)
        {
            secondlarge =arr[i];
            /* code */
        }
        
        /* code */
    }
    return secondlarge;

}


int main(){
    int arr[] = {1,43,21,125,44,66};
    int maxi = secondLargest(arr,sizeof(arr)/sizeof(arr[0]));
    cout<<maxi<<endl;
    return 0;

}