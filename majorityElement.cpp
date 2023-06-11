#include<bits/stdc++.h>
using namespace std;

int majority(vector <int>&v){
    int count =0;
    int ele;


    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        if (count==0)
        {
            count = 1;
            ele = v[i];
            /* code */
        }else if(ele == v[i]){
            count++;
        }else
        {
            count--;
        }

        
        
        
    }
    int newCount =0;//for checking majority


        for (int i = 0; i < v.size(); i++)
        {
            if (v[i]==ele)
            {
                newCount++;
                /* code */
            }
            
            /* code */
        }
        if(newCount>v.size()/2){
                return ele;
            }




    return -1;
}


int main(){

    vector<int> v = {4,4,2,4,3,4,4,3,2,4};
    int element = majority(v);
    if(element!=-1)
    cout<<element<<endl;

    if(element==-1){
        cout<<"No majority found";
    }
    return 0;
}