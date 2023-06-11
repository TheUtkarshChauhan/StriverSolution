#include<bits/stdc++.h>
using namespace std;

vector<int> leadersInArray(vector<int>& arr){
    int size = arr.size();
    int leader = arr[size-1];
    vector <int> leaders;
    leaders.emplace_back(leader);
   
    for (int i = arr.size()-2; i >=0 ; i--)
    {
        /* code */
        if (leader<arr[i])
        {
            /* code */
            leaders.push_back(arr[i]);
            leader = arr[i];
        }
        
    }
    
    return leaders;

}



int main(){

    vector<int> v = {10, 22, 12, 3, 0, 6};
    vector<int> leadersof= leadersInArray(v);
    for (int i = 0; i < leadersof.size(); i++)
    {
        cout<<leadersof[i]<< " ";
        /* code */
    }
    

    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;

// vector<int> printLeaders(int arr[], int n) {

//   vector<int> ans;
  
//  // Last element of an array is always a leader,
//  // push into ans array.
//  int max = arr[n - 1];
//  ans.push_back(arr[n-1]);

//   // Start checking from the end whether a number is greater
//   // than max no. from right, hence leader.
//   for (int i = n - 2; i >= 0; i--)
//     if (arr[i] > max) {
//       ans.push_back(arr[i]);
//       max = arr[i];
//     }

  
//   return ans;
// }

// int main() {
    
//   // Array Initialization.
//   int n = 6;
//   int arr[n] = {10, 22, 12, 3, 0, 6};

//   vector<int> ans = printLeaders(arr,n);
  
  
//   for(int i = ans.size()-1;i>=0;i--){
      
//       cout<<ans[i]<<" ";
//   }
  
//   cout<<endl;
//   return 0;
// }