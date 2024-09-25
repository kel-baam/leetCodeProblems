class Solution {
public:
    int findMaxK(vector<int>& nums) {

        int result = -1;
     for(size_t i  =0;i <  nums.size();i++)
     {
        for(size_t j = i +1;j <nums.size();j++)
        {
            if(nums[i] == -1*nums[j])
                result = max(result,abs(nums[i]));
        }
     }   
     return result;
    }
};