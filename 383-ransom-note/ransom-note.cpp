class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<int,int> tab;
        for(size_t  i = 0 ; i <magazine.length();i++)
            tab[magazine[i]]++;
        for(size_t i = 0 ; i < ransomNote.length();i++)
        {
            if(!tab[ransomNote[i]])
                return false;
            tab[ransomNote[i]]--;
        }
        return true;
    }
};