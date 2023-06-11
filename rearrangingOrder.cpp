#include<bits/stdc++.h>
using namespace std;

vector<int> rerrangeNum(vector<int>&v){
    int positive =0;
    int negative =1;
    for (int i = 0; i < v.size(); i++)
    {
        
        
        if (v[i]>0&&v[positive]<0){
            swap(v[i],v[positive]);
            positive+2;
        }
        if (v[i]<0&&v[negative]>0)
        {
            swap(v[i],v[negative]);
            negative+2;
            /* code */
        }
        

        /* code */
    }
    
return v;

}



int main(){
vector<int> v = {1,2,-4,-5};
v= rerrangeNum(v);
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" ";
    /* code */
}




    return 0;
}