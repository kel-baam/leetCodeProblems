class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int j=0;
        bool result = false;
        for(size_t i = 0; i < t.length();i++)
        {
            if(s[j] == t[i])
                j++;
        }
        if(s.length()==j)
            result = true;
        return result;
    }
};