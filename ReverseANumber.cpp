#include<bits/stdc++.h>
using namespace std;
int main(){

    int n =123;
    int revNumber = 0;
    while (n>=1)
    {
        /* code */
        int digit = n%10;
        revNumber = revNumber*10+digit;
        n = n/10;
    }
    cout<<revNumber<<endl;
    return 0;
}