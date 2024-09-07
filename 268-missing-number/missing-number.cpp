class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int> tab;
        int result= nums.size();
        for(size_t i = 0 ; i < result;i++)
            tab[nums[i]]++;
        for(size_t i = 0 ; i < result;i++)
        {
            if(tab[i]!=1)
            {
                result = i;
                break;
            }
        }
        return result;
    }
};