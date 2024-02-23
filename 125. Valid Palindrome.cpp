class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0;i<s.length();i++){
            s[i]=tolower(s[i]);
        }
         for (size_t i = 0; i < s.length(); i++) {
                  if (!isalnum(s[i])) {
                    s.erase(i, 1);
                    i--; 
            }
        }
            int l=0;
            int r=s.length()-1;
            while(l<=r){
                if(s[l]!=s[r]){
                    return false;
                }
                l++;
                r--;
            }
            return true;
    }
};
