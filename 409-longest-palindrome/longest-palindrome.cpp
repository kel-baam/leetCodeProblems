class Solution {
public:
    int longestPalindrome(string s)
    {
        unordered_map<int,int> longestPalindrom;
        unordered_map<int,int>::iterator it;
        int len  = 0;
        int flag = 0;
        for(size_t  i = 0;i < s.length();i++)
                longestPalindrom[s[i]]++;
        it = longestPalindrom.begin();
        for(it = longestPalindrom.begin(); it != longestPalindrom.end();it++)
        {

            if(it->second % 2)
            {   
                if(it->second >=2)
                {
                    len+=(it->second / 2) * 2;
                    it->second %=2;
                }
                if(!flag)
                    len++;
                flag = 1;
            }
            if(it->second % 2 == 0)
                len+=it->second;
        }
    return len;
    }
};