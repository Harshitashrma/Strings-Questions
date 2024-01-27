string modify (string s)
        {
            //code here.
            int len=s.length();
            char ch;
            vector<char>v;
            for(int i=0;i<len;i++)
            {
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                {
                    v.push_back(s[i]);
                }
            }
            
            reverse(v.begin(),v.end());
            
            int j=0;
            for(int i=0;i<len;i++)
            {
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                    s[i]=v[j];
                    j++;
                }
            }
            return s;
        }
