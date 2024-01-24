string reverseString(string s)
{
    //code here.
    string result = "";
    int alphabets[52] {0};
    
    for(int i=s.length()-1; i>=0; i--) {
        if(isupper(s[i]) and alphabets[s[i]-65] == 0) {
            result += s[i];
            alphabets[s[i]-65]++;
        }
        else if(islower(s[i]) and alphabets[s[i]-71] == 0) {
            result += s[i];
            alphabets[s[i]-71]++;
        }
    }
    return result;
}
