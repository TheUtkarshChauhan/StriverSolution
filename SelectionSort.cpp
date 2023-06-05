#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        /* code */
        int min =i;
        for (int j = i+1; j < n; j++)
        {
            /* code */
            if (arr[j]<arr[min])
            {
                /* code */
                min = j;
            }
            
        }
        swap(arr[min],arr[i]);
    }
    
}

int main(){
    int arr[] = {54,42,11,321,44,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout << "Before selection sort: " << "\n";
   for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout<<endl;
  selectionSort(arr, n);
  cout << "After selection sort: " << "\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
    return 0;
}