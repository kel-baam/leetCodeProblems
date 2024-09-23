class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        
        int result = 0;

        for(size_t i = 0; i < arr1.size();i++)
        {
            for(size_t j= 0;j <arr2.size();j++)
            {

                if(abs(arr1[i] - arr2[j]) <=d)
                    break;
                if( j == arr2.size() - 1)
                    result++;
            }

        }
        return result;
    }
};