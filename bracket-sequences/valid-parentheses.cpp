class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        stack<char> stack1;
        for(int i=0; i<n; i++)
        {
            char current_bracket =s[i];
            if(current_bracket =='(' || current_bracket=='[' || current_bracket=='{')
            {
                stack1.push(current_bracket);
            }
            else{ 
                if (stack1.size()==0) return false;
                char top_ch = stack1.top();
                stack1.pop();
                if( (current_bracket==')' and top_ch == '(') || (current_bracket=='}' and top_ch == '{') || (current_bracket==']' and top_ch == '[')) continue;
                else return false;
            }
            
        }
        return stack1.empty();


    }
};