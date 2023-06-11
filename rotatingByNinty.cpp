#include<bits/stdc++.h>
using namespace std;


void rotateByNinty(vector<vector<int> >& v){
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        for (int j=0;j<i;j++){
            swap(v[i][j],v[j][i]);
        }
        /* code */
    }
    // reversing each row
    for (int i = 0; i < n; i++)
    {
        /* code */
        reverse(v[i].begin(),v[i].end());
    }
    



}

int main(){

    vector < vector < int >> arr;
    arr =  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotateByNinty(arr);
    cout << "Rotated Image" << endl;
    for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[0].size(); j++) {
        cout << arr[i][j] << " ";
    }
    cout << "\n";
    }


    return 0;
}