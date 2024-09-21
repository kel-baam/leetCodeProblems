class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> result;
        size_t right = 0, 
        left = 0;
        size_t rightResult;
        size_t leftResulr;
        for(size_t  i = 0 ; i< s.length();i++)
        {
            // if(i > 0)
            //     left = i-1;
            rightResult = std::numeric_limits<int>::max();
            leftResulr =  std::numeric_limits<int>::max();
            if(s[i] != c)
            {
                for(right = i+1;right < s.length(); right++)
                {
                    if(s[right] == c)
                    {
                        rightResult = right - i ;

                        break;
                    }
                }
                if(i != 0)
                {
                    for(left = i - 1; left >=0 ; left--)
                    {
                        if( i != 0 && s[left] == c)
                        {
                            leftResulr = i - left;
                            break;
                        }
                        if( left ==0)
                            break;
                    }
                }
                result.push_back(min(leftResulr ,rightResult));
            }
            else
                result.push_back(0);
          
        }


        return result;
    }
};