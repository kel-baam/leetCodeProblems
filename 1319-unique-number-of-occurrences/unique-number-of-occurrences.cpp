class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> tab;
        unordered_map<int,int> check;
        for(size_t i = 0 ; i < arr.size();i++)
            tab[arr[i]]++;
        for(auto it = tab.begin(); it!= tab.end();it++)
        {
            if(check.count(it->second) > 0)
                return false;
            check[it->second]++;
        }
        return true;
    }
};