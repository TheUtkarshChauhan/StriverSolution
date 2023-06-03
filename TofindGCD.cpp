#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if (b==0)
    {
        /* code */
        return a;
    }
    
    return gcd(b,a%b);
}
int main(){
    pair<int,int> p = {6,14};

    int greatesofall = gcd(p.first,p.second);
    cout<<greatesofall<<endl;
    return 0;
}