#include<bits/stdc++.h>
using namespace std;

int partition(vector <int> &arr, int low, int high){

    int pivot = arr[low];
    int i = low;
    int j =high;

    while (i<j)
    {
        while (arr[i]<=pivot && i<=high -1)
        {
            /* code */
            i++;
        }
        while (arr[j]>pivot && j>= low +1)
        {
            j--;
            /* code */
        }
        if (i<j){
            swap(arr[i], arr[j]);
        }
        
        
        
        
        /* code */
    }
    swap(arr[low], arr[j]);
    return j;
    
}

void quickSort(vector <int> &arr,int low, int high){
    if (low<high)
    {
        int pIndex = partition(arr,low,high);
        quickSort(arr,low,pIndex-1);
        quickSort(arr,pIndex+1,high);

        /* code */
    }
    
}

int main(){
    vector<int> arr = {23,12,44,2,31,3,32,12,11};
    int n = arr.size();
cout << "Before Using quick Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

     quickSort(arr,0,n-1);
    cout << "After Using quick sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}