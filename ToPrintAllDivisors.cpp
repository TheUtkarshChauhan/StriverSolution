#include<bits/stdc++.h>
using namespace std;
int main(){
    int num = 663;
    vector<int> v;
    for (int i = 1; i <= 663; i++)
    {
        /* code */
        if (663%i==0)
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