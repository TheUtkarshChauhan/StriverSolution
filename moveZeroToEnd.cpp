#include<bits/stdc++.h>
using namespace std;
void movezeroend(int arr[], int size) {
    int j = size-1;
    for (int i = 0; i <j; i++) 
    {
        if(arr[i] == 0){
            if (arr[j]!=0)
            {
            swap(arr[j],arr[i]);
            j--;
                /* code */
            }else{
                i--;
                j--;
            }
            
            
        }
        /* code */
    }
    

}



int main(){

    int arr[] = {1,23,0,0,3,4,0};
    int size =sizeof(arr)/sizeof(arr[0]);
    movezeroend(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
        /* code */
    }
    
    return 0;
}