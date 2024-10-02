class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int> tab;
        vector<int> result;
        int size;

        for(size_t i = 0; i < nums.size();i++)
            tab[nums[i]]++;

        size = nums.size();

        while(size > 0)
        {
            if(!tab.count(size))
                result.push_back(size);
            size--;
        }
        return result;
    }
};