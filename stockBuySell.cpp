#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& v){
    int maxPro =0;
    int minPrice = INT_MAX;
    for (int i = 0; i < v.size(); i++)
    {
        minPrice = min(minPrice, v[i]);
        maxPro = max(maxPro, v[i]-minPrice);
        /* code */
    }
    

    return maxPro;


}


int main(){
    vector <int>v = {7,1,5,3,6,4};
    int profit = maxProfit(v);
    cout<<profit<<endl;
    return 0;

}