bool isRotated(string str1, string str2)
    {
        // Your code here
        if(str1.length()!=str2.length())
        return false;
        
        if(str1.length()<=2 || str2.length()<=2)
        return false;
        
        
        string clockwise="";
        string anticlock="";
        
        clockwise=str1.substr(2)+str1.substr(0,2);
        anticlock=str1.substr(str1.length()-2)+str1.substr(0,str1.length()-2);
        
        if(str2==clockwise || str2==anticlock)
        return true;
        
        return false;
        
    }
