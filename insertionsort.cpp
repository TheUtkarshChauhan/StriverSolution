#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int  j = 1; j <n; j++)
        {
            /* code */
            if (arr[j-1]>arr[j])
            {
                /* code */
                swap(arr[j-1],arr[j]);
                j--;
            }
            
            
        }
        
    }
    
}

int main(){
int arr[] = {54,42,11,321,44,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout << "Before insertion sort: " << "\n";
   for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout<<endl;
  insertionSort(arr, n);
  cout << "After insertion sort: " << "\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
    return 0;
}