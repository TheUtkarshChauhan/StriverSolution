#include<bits/stdc++.h>
using namespace std;


int printFibo(int num){
    if (num == 0 )
    {
        /* code */
        return 0;
    }
    if (num ==1)
    {
        return 1;
        /* code */
    }
    
    return printFibo(num-1)+printFibo(num-2);
    
}
int main(){
    int num =5;
    // cout<< printFibo(num)<< " ";
    for (int i = 0; i < num; i++)
    {
        /* code */
        cout<< printFibo(i)<< " ";
    }
    


    return 0;
}