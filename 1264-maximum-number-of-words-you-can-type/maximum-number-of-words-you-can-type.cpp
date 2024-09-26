class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_map<int,int> tab;
        stringstream ss(text);
        string splitWords;
        size_t count = 0;

        for(size_t i = 0; i < brokenLetters.length();i++)
        {
            tab[brokenLetters[i]]++;
        }

        while(ss >> splitWords)
        {
            for(size_t i = 0; i < splitWords.length();i++)
            {
                if(tab.count(splitWords[i]))
                    break;
                if(i == splitWords.length() - 1)
                    count++;
            }
        }
        return count;
    }
};