class Solution {
public:
    bool isValid(string s) {
        stack <char> my_stack;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{')
            {
                my_stack.push(s[i]);
            }
            else if (my_stack.empty())
                return false;
            else if ( (s[i]==')' & my_stack.top()!='(') || (s[i]==']' & my_stack.top()!='[') || (s[i]=='}' & my_stack.top()!='{') )
                return false;
            else 
            my_stack.pop();
        }
        if (my_stack.empty())
            return true;
        else
            return false;
    }
};
