#include<bits/stdc++.h>
using namespace std;
void printUptoN(int num){
    if (num ==0)
    {
        /* code */
        return;
    }
    printUptoN(num-1);
    cout<<num<<" ";
    
}
int main(){
    int num =14;
    printUptoN(num);

    return 0;
}