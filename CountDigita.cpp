#include<bits/stdc++.h>
using namespace std;
int count_digits(int n){
    int count =0;
    while (n>=1)
    {
        /* code */
        n = n/10;
        count++;
    }
    
    return count;
}
int main(){
    int num = 5;
    cout<<"Total number of digits are: "<<count_digits(num)<<endl;
    return 0;
}