#include<bits/stdc++.h>
using namespace std;

int lcs(vector<int> v){
    if (v.size() ==0)
    {
        /* code */
        return 0;
    }
    
    sort(v.begin(),v.end());
    int maxi =1;//ans
    int prev = v[0];
    int curr =1;
    // int count =1;

    for (int i = 1; i <v.size(); i++)
    {
        if (v[i] == prev+1)
        {
            curr++;
            /* code */
        }else if(v[i]!=prev){
            curr =1;
        }
        prev = v[i];
        maxi = max(maxi,curr);
        
        /* code */
    }
    

    return maxi;
}


int main(){
 vector<int> arr{100,200,1,2,3,4};
int maxi = lcs(arr);
cout<<maxi<<endl;


    return 0;
}