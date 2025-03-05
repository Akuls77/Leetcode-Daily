class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length()<=1)
        {
            return true;
        }

        int st=0;
        int end=s.length()-1;

        while(st<end)
        {
            if(!isalnum(s[st]))
            {
                st++;
                continue;
            }

            if(!isalnum(s[end]))
            {
                end--;
                continue;
            }

            if(tolower(s[st]) != tolower(s[end]))
            {
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};