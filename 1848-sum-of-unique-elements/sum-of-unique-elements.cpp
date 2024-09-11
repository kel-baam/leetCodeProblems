class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
       unordered_map<int,int> tab;
       unordered_map<int,int>::iterator it;

       int result = 0;
       for(size_t  i = 0 ; i <nums.size();i++)
        tab[nums[i]]++;
        it = tab.begin();
        for(it; it!= tab.end();it++)
        {
            if(it->second == 1)
                result+=it->first;
        }
        return result;
    }
};