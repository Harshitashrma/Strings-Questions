 bool areRotations(string s1,string s2)
    {
        // Your code here
        s1+=s1;
        if(s1.find(s2)!=-1)
        return true;
        
        return false;
    }
