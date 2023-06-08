#include<bits/stdc++.h>
using namespace std;

int noApperaedOnce(int arr[],int size){
    int xorr = 0;
    for (int i = 0; i < size; i++)
    {
        xorr = xorr ^arr[i];

        /* code */
    }
    return xorr;
    

}

int main(){
    int arr[] = {1,2,1,2,3,4,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = noApperaedOnce(arr,size);
    cout<<ans;

    return 0;
}