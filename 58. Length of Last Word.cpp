class Solution {
public:
    int lengthOfLastWord(string s) {
     int size=s.length()-1;
     int i=size;
     int count=0;
     while(i>=0){
         if(s[i]!=' '){
             count++;
         }
         else if (count>0){
             return count;
         }
         i--;
     }
     return count;
    }
};
