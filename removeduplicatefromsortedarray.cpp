// #include<bits/stdc++.h>
// using namespace std;

// void removeDupicates(vector<int>& arr) {
// for (vector<int>::iterator  it = arr.begin(); it != arr.end(); it++)
// {
//     /* code */
//     if (*(it)=*(it+1))
//     {
//         /* code */
//         arr.erase(it+1);
//     }
    
// }


// }


// int main(){

//     vector<int> arr= {1,2,2,2,3,3,4};
//     removeDupicates(arr);
//     for(auto it =arr.begin(); it !=arr.end();it++){
//         cout<<*(it)<<" ";
//     }

//     return 0;
// }

#include<bits/stdc++.h>

using namespace std;
int removeDuplicates(int arr[], int n)
{
  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}
int main() {
  int arr[] = {1,1,2,2,2,3,3};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = removeDuplicates(arr, n);
  cout << "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }
}