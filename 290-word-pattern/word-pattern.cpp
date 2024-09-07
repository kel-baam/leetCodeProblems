class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<int,std::string> PatternTab;
        map<std::string,int> STab;

        istringstream iss(s);
        string str;
        int i = 0;

        while(iss >> str)
        {
            if(PatternTab.count(pattern[i]) > 0 && PatternTab[pattern[i]]!=str)
                return false;
            if(STab.count(str) > 0 && STab[str]!= pattern[i])
                return false;
            PatternTab[pattern[i]] = str;
            STab[str] = pattern[i];
            i++;
        }
        if(i!= pattern.length())
            return false;
        return true;
    }
};