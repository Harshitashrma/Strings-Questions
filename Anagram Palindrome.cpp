//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int isPossible (string s);

int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		if (isPossible (s))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int isPossible (string S)
{
    // your code here
    int count=0;
    unordered_map<char,int>map;
    for(auto i:S)
    {
        map[i]++;
    }
    
    for(auto i:map)
    {
        if(i.second%2==1)
        count++;
    }
    if(count>1)
    return false;
    
    return true;
}
