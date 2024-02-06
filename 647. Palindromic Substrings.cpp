class Solution {
public:
    int check(string s,int i,int j)
    {
        int count=0;
        while(i>=0 && j<s.length() && s[i]==s[j])
        {
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {

        int countodd=0;
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            //evenlength
           int  counteven=check(s,i,i+1);
            ans+=counteven;
            //oddlength
            int countodd=check(s,i,i);
            ans+=countodd;
        }

        return ans;
    }
};
