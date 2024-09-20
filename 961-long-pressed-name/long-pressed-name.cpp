class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        bool result = false;
        size_t next;
        size_t i = 0;
        next = i+1;
        if(name == typed)
            return true;
        for(size_t j = 0 ; j < typed.length();j++)
        {
            if(name[i] != typed[j] && j != 0 && typed[j]== typed[j-1])
                result = true;
            else if (name[i] != typed[j])
                return false;
            else
                i++;
        }
        if(i != name.length())
            return false;

        return result;
    }
};