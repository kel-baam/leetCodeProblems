class Solution {
public:
    char findTheDifference(string s, string t) {
       unordered_map<int,int> Stab;
        char c;
        for(size_t i = 0;i <s.length();i++)
            Stab[s[i]]++;
        for(size_t i = 0;i <t.length();i++)
        {
            if(Stab[t[i]] <=0)
            {
                c = t[i];
                break;
            }
            Stab[t[i]]--;
        }
        return c;
    }

};