class Solution {
public:
    int numUniqueEmails(vector<string>& emails){

        string first_part; 
        string second_part;
        unordered_map<string,int> result;
        for(size_t  i = 0 ; i <emails.size() ; i++)
        {
            string newStr;
            int index = emails[i].find("@");
            first_part = emails[i].substr(0,index);
            second_part = emails[i].substr(index,emails[i].length());
            for(size_t j = 0 ; j <first_part.length();j++)
            {
                if(first_part[j]=='.')
                    continue;
                if(first_part[j]=='+')
                        break;
                newStr+=first_part[j];
            }
            result[newStr+second_part]++;
        }
        return result.size();
    }
};