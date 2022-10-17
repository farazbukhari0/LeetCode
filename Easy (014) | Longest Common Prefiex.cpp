class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min_len=1000,n=0;
        string s="";
        char c,ch;
        for(int i=0;i<strs.size();i++)//ith string
        {
            if(strs[i].size()<min_len)
                min_len=strs[i].size();
        }
        for(int i=0;i<min_len;i++)//ith character
        {
            for(int j=0;j<strs.size();j++)//jth string
            {
                if(j==0)
                {
                    ch = strs[j][i];
                }  
                else
                {
                    c= strs[j][i];
                    if(c!=ch)
                        return s;
                }
            }
            s+=ch;
        }
        return s;
    }
};
