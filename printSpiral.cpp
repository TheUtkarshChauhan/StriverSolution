#include<bits/stdc++.h>
using namespace std;


vector<int> spiralPrint(vector<vector<int>> & v){
    vector<int> ans;// answer array
    int n = v.size();
    int m = v[0].size();

    int top = 0,left =0,bottom =n-1,right =m-1;

    while (top<=bottom &&left<=right) 
    {
        for (int i = left; i <= right; i++)
        {
            ans.push_back(v[top][i]);
            /* code */
        }
            top++;
            for (int i = top; i <= bottom; i++)
            {
                ans.push_back(v[i][right]);
                /* code */
            }
            right--;
            if (top<=bottom)
            {
                for (int i = right; i >= left; i--)
                {
                    /* code */
                    ans.push_back(v[bottom][i]);
                }
                bottom--;
                /* code */
            }
            
            if(left<=right){
                for (int i =bottom; i>=top; i--)
                {
                    ans.push_back(v[i][left]);
                    /* code */
                }
                left++;
            }
        
        /* code */
    }
    


return ans;
}

int main(){
vector<vector<int>> mat   {{1, 2, 3, 4},
                             {5, 6, 7, 8},
	                         {9, 10, 11, 12},
		                     {13, 14, 15, 16}};
		                     
  vector<int> ans = spiralPrint(mat);

  for(int i = 0;i<ans.size();i++){
      
      cout<<ans[i]<<" ";
  }
  
  cout<<endl;



    return 0;
}