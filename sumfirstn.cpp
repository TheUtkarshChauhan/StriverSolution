#include<bits/stdc++.h>
using namespace std;
int sumFirstN(int num,int sum){

    if (num ==0)
    {
        /* code */
        return sum;
    }
    return sumFirstN(num-1,sum+num);
    
}

int main(){
    int num =123;
    int res = sumFirstN(num,0);
    // cout<<"Hell";
    cout<<res<<endl;

    return 0;

}