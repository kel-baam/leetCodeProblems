class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
       unordered_map<int,int> candies;
       int countCandy = candyType.size() / 2;
       int result;
       for(size_t i = 0 ; i < candyType.size();i++)
            candies[candyType[i]]++;
        
        if(candies.size() >= countCandy)
            result = countCandy;
        else
            result = candies.size();
        return result;
    }
};