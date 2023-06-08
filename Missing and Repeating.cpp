#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	unordered_map<int,int> mp;
    
        pair<int,int> result;
    
        
    
        for (int i=0;i<n;i++)
    
        {
    
            mp[arr[i]]++;
    
        }
    
        
    
        for ( auto it:mp)
    
        { 
    
            if(it.second==2) 
				result.second = it.first;  // repeat 
    
        }
    
        for(int i=1;i<=n;i++)
    
        {
    
            if(mp.find(i)==mp.end())
    
            {
    
                result.first = i; // missing 
    
                break;
    
            }
    
        }
        return result;
	
}
