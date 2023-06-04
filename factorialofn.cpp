#include<bits/stdc++.h>
using namespace std;

int fact(int num, int facto){

    if (num==0||num==1)
    {
        /* code */
        return facto;
    }
    
    return (fact(num-1, facto*num));
}
// alternative way
int factorial(int num){
    if (num==0||num==1)
    {
        /* code */
        return 1;

    }
    return num*factorial(num-1);
    
}

int main(){
    int num = 7;
    int facto =1;
    cout<<fact(num,facto)<<endl;
    cout<<factorial(num)<<endl;

    return 0;

}