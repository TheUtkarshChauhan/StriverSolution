#include <bits/stdc++.h>
using namespace std;



int linearsearch(int arr[],int size, int ele){
    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == ele)
        {
            /* code */
            return i;        }
        
        /* code */
    }
    
    return 0;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ele = 6;
    int index = linearsearch(arr,size,ele);
    if (index)
    {
        /* code */
        cout<<"Element found at position "<<index+1;
    }else
    {
        cout<<"No element found";
    }
    
    
    
    return 0;
}