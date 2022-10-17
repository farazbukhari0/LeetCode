class Solution {
public:
    bool isPalindrome(int x) {
        long int r=0;
        long int t=x;
        int d;
        while(x>0){
            d = x%10;
            x=x/10;
            r=(r*10)+d;
        }
        
        if(t==r)
            return true;
        else
            return false;
        
    }
};
