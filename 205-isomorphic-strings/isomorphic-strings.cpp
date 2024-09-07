class Solution {
public:
    bool isIsomorphic(string s, string t) {
       unordered_map<int,int> Stab;
       unordered_map<int,int> Ttab;

       for(size_t i = 0 ; i < s.size();i++)
       {
            if(Stab.count(s[i]))
            {
                if(t[i]!=Stab[s[i]])
                    return false;
            }
            if(Ttab.count(t[i]))
            {
                if(Ttab[t[i]] != s[i])
                    return false;
            }
            Stab[s[i]] = t[i];
            Ttab[t[i]] = s[i];

       } 
       return true;
    }
};