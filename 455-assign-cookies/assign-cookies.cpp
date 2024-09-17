class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
    
     int result = 0;
     size_t j = 0;
     size_t i = 0;
     sort(g.begin(),g.end());
     sort(s.begin(),s.end());

      while(i < g.size())
      {
           if(j == s.size())
                break;

            if(s[j] >= g[i])
            {
                result++;
                j++;
                i++;
            }
            else
                j++;
            
      }
      return result;
    }
};