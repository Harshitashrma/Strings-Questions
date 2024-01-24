//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sentencePalindrome(string s) 
	{
	    // code here 
	    string str1="";
	    string str2="";
	    
	    for(int i=0;i<s.length();i++)
	    {
	        if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
	        {
	            str1+=s[i];
	        }
	    }
	    
	    for(int i=s.length()-1;i>=0;i--)
	    {
	        if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
	        {
	            str2+=s[i];
	        }
	    }
	   // cout<<str1<<endl;
	   // cout<<str2<<endl;
	    
	    for(int i=0;i<str1.length();i++)
	    {
	        if(str1[i]!=str2[i]){
	            return false;
	        }
	        
	    }
	    
	    return true;
	}
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution ob;
        cout<<ob.sentencePalindrome(str)<<endl;
    }
    return 0;
}  


// } Driver Code Ends
