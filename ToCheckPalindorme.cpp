#include<bits/stdc++.h>
using namespace std;
int main(){
    int n =121;
    int num =n;
    int revNumber = 0;
    while (n>=1)
    {
        /* code */
        int digit = n%10;
        revNumber = revNumber*10+digit;
        n = n/10;
    }
    if (num == revNumber)
    {
        /* code */
        cout<<"Number is a Palindorme"<<endl;
    }else
    {
        cout<<"Number is a not Palindorme"<<endl;
    }
    
    
    return 0;
}