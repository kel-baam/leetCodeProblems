class Solution {
public:
    string reverseOnlyLetters(string s) {
        size_t i = 0;
        size_t end = s.length() -1;
        
        while(i < end)
        {
            if(isalpha(s[i]) && isalpha(s[end]))
            {
                swap(s[i],s[end]);
                end--;
                i++;
            }
            if(!isalpha(s[end]))
                end--;
            if(!isalpha(s[i]))
                i++;
        }
        return s;
    }
};