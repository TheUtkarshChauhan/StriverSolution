#include<bits/stdc++.h>
using namespace std;

vector<int> subArraySum(vector<int>& v, int sum){
    vector <int> subarray;
    int left = 0;
    int newSum = sum;
    for (int i = 0; i < v.size();i++)
    {
        /* code */if (newSum ==0)
        {
            /* code */
            break;
        }
        if (newSum <0)
        {
            /* code */
            subarray.clear();
            newSum = sum;
            left++;
            // while (i!=left)
            // {
            //     /* code */
            //     i--;
            // }
            i = left;
            i--;
            
        }
        
        newSum = newSum - v[i];
        subarray.push_back(v[i]);
    }
    
    
return subarray;

}



int main(){
    vector <int> arr = {1,7,3,9};
    int sum =10;
    vector <int> solution = subArraySum(arr,10);
    for (int i = 0; i < solution.size(); i++)
    {
        cout<<solution[i]<<" ";
        /* code */
    }
    
    return 0;
}