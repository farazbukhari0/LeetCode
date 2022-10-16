class Solution {
public:
    int romanToInt(string s) {
        int t,n=0;
        for(int i=0;i<s.length();i++){
            t=0;
            if(s[i]=='I' & s[i+1]=='V' & i+1<s.length())
                t=4;
             if(s[i]=='I' & s[i+1]=='X' & i+1<s.length())
                t=9;
             if(s[i]=='X' & s[i+1]=='L' & i+1<s.length())
                t=40;
             if(s[i]=='X' & s[i+1]=='C' & i+1<s.length())
                t=90;
             if(s[i]=='C' & s[i+1]=='D' & i+1<s.length())
                t=400;
             if(s[i]=='C' & s[i+1]=='M' & i+1<s.length())
                t=900;
             if(t!=0)
             {
                 i++;
                 n=n+t;
             }
             else
             {
                 if(s[i]=='I') n=n+1;
                 if(s[i]=='V') n=n+5;
                 if(s[i]=='X') n=n+10;
                 if(s[i]=='L') n=n+50;
                 if(s[i]=='C') n=n+100;
                 if(s[i]=='D') n=n+500;
                 if(s[i]=='M') n=n+1000;
             }
        }
        return n;
    }
};
