class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> vec={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<string,int> diff;
        int result = 0;
       for(size_t i = 0 ; i < words.size();i++)
       {
            string index;
            for(size_t j = 0 ; j <words[i].length();j++)
                index+= vec[words[i][j] - 97];
            diff[index]++;
       } 
        result = diff.size();
       return result ;
    }
};