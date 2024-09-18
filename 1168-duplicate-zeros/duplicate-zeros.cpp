class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> tmpVec;
        auto it=arr.begin();
        int size=arr.size();

        while(it !=  arr.end())
        {
            if(tmpVec.size() >= size)
                break;
            if(*it != 0)
            {
                tmpVec.push_back(*it);
                it++;
            }
            else if(*it == 0)
            {

                tmpVec.push_back(0);
                if(tmpVec.size() >= size)
                    break;
                tmpVec.push_back(0);
                it++;
            }
        }
        arr =tmpVec;

    }
};