#include<bits/stdc++.h>
using namespace std;
int armStrong(int num){
    int Onum = num;
    int count =0;
    int testnum = num;
    int newnum=0;
    while (num>=1)
    {
        /* code */
        count++;
        num = num/10;
    }
    while (testnum>=1)
    {
        /* code */
        int digit = testnum%10;
        newnum = newnum + pow(digit,count);
        testnum = testnum/10;
    }
    return newnum;
    

    
}
int main(){
    int num  = 153;
    cout<<armStrong(num)<<endl;
    if (num ==armStrong(num))
    {
        /* code */
        cout<<"Number is Armstrong"<<endl;
    }else
    {
        cout<<"Number is not Armstrong"<<endl;
    }
    
    
    return 0;
}