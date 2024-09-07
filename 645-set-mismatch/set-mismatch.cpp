class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> numsTab;
        vector<int> result;
        for(size_t i = 0 ; i <nums.size();i++)
        {
                numsTab[nums[i]]++;
            if(numsTab[nums[i]] == 2)
                result.push_back(nums[i]);
        }
        for(size_t i = 0 ; i <nums.size();i++)
        {
            if(!numsTab.count(i+1))
            {
                result.push_back(i+1);
                break;
            }
        }
        return result;
    }
};