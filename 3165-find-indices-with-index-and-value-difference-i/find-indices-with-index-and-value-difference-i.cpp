class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        
        vector<int> result;

        for(size_t i = 0;i < nums.size();i++)
        {

            for(size_t j = i ; j < nums.size();j++)
            {
                if(abs(static_cast<int>(i - j)) >= indexDifference && abs(static_cast<int>(nums[i] - nums[j])) >= valueDifference)
                {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }

            }
        }
        if(!result.size())
        {
            result.push_back(-1);
            result.push_back(-1);
        }
        return result;
    }
};