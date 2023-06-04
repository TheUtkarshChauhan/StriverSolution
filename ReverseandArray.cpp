#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector <int> v,int start,int end){
    if (start<end)
    {
        /* code */
        swap(v[start],v[end]);
        reverseArray(v,start+1,end-1);
    }
    
}
// alternate way
void reverseArray1(int arr[], int start, int end) {
   if (start < end) {
      swap(arr[start], arr[end]);
      reverseArray1(arr, start + 1, end - 1);
   }
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    reverseArray1(arr,0,5);
    for (int i = 0; i < 6; i++)
    {
        /* code */
        cout<<arr[i]<<" "<<endl;
    }
    

    vector <int> v = {5,4,3,2,1};
    cout<<"Before Swapping:";
    for(auto it = v.begin(); it != v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<"After Swapping:";
    // reverseArray(v,0,v.size());
    reverse(v.begin(),v.end());
    for(auto it = v.begin(); it != v.end();it++){
        cout<<*(it)<<" ";
    }
    return 0;
}