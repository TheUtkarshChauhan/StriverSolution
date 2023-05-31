#include<iostream>
#include <bits/stdc++.h>
#include<string>
#include<iomanip>
using namespace std;
int nCr(int n, int r){
    long long res =1;
    for (int i = 0; i < r; i++)
    {
        /* code */
        res = res * (n-1);
        res =res / (i+1);
    }
    return (int)(res);
}
vector<vector<int>> pascalTriangle(int n){
    vector<vector<int>> ans;
    for (int row = 1; row <= n; row++)
    {
        /* code */
        vector<int> templist;
        for (int  col = 1; col <=n ; col++)
        {
            /* code */
            templist.push_back(nCr(row -1,col-1));
        }
        ans.push_back(templist);
    }
    return ans;
    
}
int main()
{
    int n;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;
    vector<vector<int>> ans = pascalTriangle(n);
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "n";
    }
    return 0;
}