#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>> res;
    
    if(n == 1){
      res.push_back({1});
    }
    
    if(n == 2){
      res.push_back({1,1});
    }

    if(n >= 3){
      res.push_back({1});
      res.push_back({1,1});

      int level = 2;
      for(int i = 1; i < n-1; ++i){
        vector<long long int> ans;
        for(int j = 0; j <= level; ++j){
          if(j == 0){
            ans.push_back(res[i][0]);
          }
          if(j == level-1){
            ans.push_back(res[i][level-1]);
          }
          else{
            ans.push_back(res[i][j-1] + res[i][j]);
          }
        }
        ++level;
        res.push_back(ans);
      }
    }

  return res;

}
