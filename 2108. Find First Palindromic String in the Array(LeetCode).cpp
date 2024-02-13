class Solution {
public:
    bool isPalindrome(string s){
        int start=0;
        int end=s.length()-1;
        while(start<=end){
            if(s[start]==s[end]){
                start++;
                end--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++)
        {
            if (isPalindrome(words[i])){
                return words[i];
            }
        }
    string ans="";
        return ans;
    }
};
