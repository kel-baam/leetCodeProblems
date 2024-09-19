class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        auto next =nums.begin();
        auto it = nums.begin();

        while(it + 1 != nums.end())
        {
            next = it +1;
            if(*it == *next)
            {
                nums.erase(it);
                continue;
            }
            it++;
        }
        return nums.size();
    }
};