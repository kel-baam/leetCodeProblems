class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
       unordered_map<string,int> tab;
       vector<string> vec;
       for(size_t i = 0 ; i < s.length();i++)
       {
         string tmp = s.substr(i,10);
            if(tmp.length()< 10)
                break;
        tab[tmp]++;
        if(tab[tmp] == 2)
            vec.push_back(tmp);
       } 
       return vec;
    }
};