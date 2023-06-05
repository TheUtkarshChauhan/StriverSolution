#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    for (int i = n-1; i >=0; i--)
    {
        /* code */
        
        for (int j = 0; j <= i-1; j++)
        {
            /* code */
            if (arr[j]>arr[j+1])
            {
                /* code */
                swap(arr[j],arr[j+1]);

            }
            
            
            
        }
                
        
        
    }
    


}

int main(){
int arr[] = {54,42,11,321,44,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout << "Before Bubble sort: " << "\n";
   for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout<<endl;
  bubbleSort(arr, n);
  cout << "After Bubble sort: " << "\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
    return 0;
}