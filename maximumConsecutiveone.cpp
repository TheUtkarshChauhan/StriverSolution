#include <bits/stdc++.h>
using namespace std;
int countMax(int arr[],int size){
    int count = 0;
    int maxi = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==1)
        {
            count++;
            /* code */
        }else
        {
            count= 0;
        }
        
        maxi =max(maxi,count);
        /* code */
    }
    
    
    

    return maxi;
}

int main(){
    int arr[] = {1,1,1,0,0,0,1,1,0,1,1,1,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int count = countMax(arr,size);
    cout<<"count: "<<count;
    return 0;
}