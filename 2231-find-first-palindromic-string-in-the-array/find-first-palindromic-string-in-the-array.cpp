class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        size_t mid;
        size_t next;
        
       for(size_t  i = 0; i< words.size();i++)
       {
            mid =( words[i].length() / 2);
            next = mid;
            if(!(words[i].length() %2))
            {
                mid  = mid -1;
                next = mid+1;
            }
            for(size_t j = mid ; j >=0 && next < words[i].length();j--,next++)
            {
                if(words[i][j] != words[i][next])
                    break;
                if(j == 0 && next == words[i].length() - 1)
                    return words[i];
            }
                
       }
       return "";
    }
};