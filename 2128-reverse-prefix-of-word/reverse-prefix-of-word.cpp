class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        auto index=find(word.begin(),word.end(),ch);
        if(index != word.end())
        {
            auto tmpIndex = index;
            for(auto it = word.begin(); it != word.end();it++)
            {
                if(it >=tmpIndex)
                    break;
                swap(*it,*tmpIndex);
                tmpIndex--;
            }
        }
        return word;
    }
};