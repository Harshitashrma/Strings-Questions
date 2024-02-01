bool checkPangram (string s) {
        // your code here
      for (auto& x : s) { 
        x = tolower(x); 
    }
    int count[26]={0};
    int n=0;
    for(int i=0;i<s.length();i++)
    {
        n=s[i]-'a';
        count[n]++;
    }
    
    for(int i=0;i<27;i++)
    {
        if(count[i]==0)
        {
            return false;
        }
    }
    return true;
       
    }
