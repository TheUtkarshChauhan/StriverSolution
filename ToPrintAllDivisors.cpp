#include<bits/stdc++.h>
using namespace std;
int main(){
    int num = 663;
    vector<int> v;
    for (int i = 1; i <= num; i++)
    {
        /* code */
        if (num%i==0)
        {
            /* code */
            v.push_back(i);
        }
        
        
        

    }
    for (auto it = v.begin(); it != v.end();it++)
        {
            /* code */
            cout<<*(it)<<" ";;
        }
    
    return 0;
}