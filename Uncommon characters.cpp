 string UncommonChars(string A, string B)
        {
            // code here
            unordered_map<char,int>map,map2;
            
            for(int i=0;i<A.length();i++)
            {
                map[A[i]]++;
            }
            
             for(int i=0;i<B.length();i++)
            {
                map2[B[i]]++;
            }
            
      
            unordered_set<char>ans;
           
             for (int i = 0; i < A.length(); i++)
             {
                if (map2.find(A[i]) == map2.end())
                    {
                        ans .insert(A[i]);
                    }
              }

                  for (int i = 0; i < B.length(); i++)
                 {
                    if (map.find(B[i]) == map.end())
                      {
                         ans.insert(B[i]);
                       }
                 }
            
         
           string result="";
           for(auto i:ans)
           {
               result+=i;
           }
           
           sort(result.begin(),result.end());
           if(result.empty())
           return "-1";
           
            return result;
        }
