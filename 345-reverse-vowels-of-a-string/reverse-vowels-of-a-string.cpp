class Solution {
public:
    string reverseVowels(string s) {
        string vowels="aeiou";
        size_t i = 0;
        size_t end = s.length() - 1;
        auto firstVowel=vowels.begin();
        auto secondVowel=vowels.end();

        while(i <s.length())
        {
            if(i >= end)
                break;
            char tmp1 = tolower(s[i]);
            char tmp2 =tolower(s[end]);

            firstVowel=find(vowels.begin(),vowels.end(),tmp1);
            secondVowel = find(vowels.begin(),vowels.end(),tmp2);
            if(firstVowel !=vowels.end() && secondVowel!= vowels.end())
            {
                swap(s[i],s[end]);
                i++;
                end--;
            }
            if(firstVowel == vowels.end())
                i++;
            if(secondVowel == vowels.end())
                end--;
        }
        return s;
    }
};