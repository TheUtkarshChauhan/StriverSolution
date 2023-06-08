#include<bits/stdc++.h>
using namespace std;


int max(int arr[], int size){
    int maximum = 0;
    for (int i = 0; i < size; i++)
    {
        /* code */
        if (arr[i] > maximum)
        {
            /* code */
            maximum = arr[i];
        }
        
    }
    

    return maximum;
}
int main(){

    int arr[] = {1,43,21,125,44,66};
    int maxi = max(arr,sizeof(arr)/sizeof(arr[0]));
    cout<<maxi<<endl;
    return 0;

}