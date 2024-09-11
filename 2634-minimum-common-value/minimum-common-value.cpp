class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
      unordered_map<int,int> tab;
      for(size_t i = 0 ; i <nums1.size();i++)
        tab[nums1[i]]++;

      for(size_t i = 0 ; i <nums2.size();i++)
      {
            if(tab.count(nums2[i]) >0)
                return nums2[i];
      }
      return -1;
    }
};