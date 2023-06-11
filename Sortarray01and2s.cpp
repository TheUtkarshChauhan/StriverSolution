#include<bits/stdc++.h>
using namespace std;

void sortArraOne(int arr[], int size){
    int low=0;
    int high =size-1;
    
    for (int mid = 0; mid < size; mid++)
    {
        /* code */
        if (mid>high)
        {
            /* code */
            break;
        }
        if (mid<low)
        {
            break;
            /* code */
        }
        
        if (arr[mid] ==0)
        {
            /* code */
            swap(arr[mid],arr[low]);
            low++;mid--;
        }else if (arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }else
        {
            continue;
        }
        
        
        
    }
    

}



int main(){
    int arr [] = {2,2,1,0,0,1,2,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    sortArraOne(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";        /* code */
    }
    

    return 0;
}