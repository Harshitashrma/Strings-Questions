string removeVowels(string S) 
	{
	    // Your code goes here
	    string ans="";
	    for(int i=0;i<S.length();i++)
	    {
	        if(S[i]=='a'||S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u')
	        {
	          
	          continue;
	        }
	        else{
	            ans+=S[i];
	        }
	       
	    }
	    return ans;
	}
