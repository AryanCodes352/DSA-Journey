class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        int st=0;
        

        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                str += s[i];
            }
        }

        int end=str.length()-1;

        while(st<end){

            if(tolower(str[st])!=tolower(str[end])){
                return false;
            }

            st++;
            end--;
        }

        return true;

    }
};