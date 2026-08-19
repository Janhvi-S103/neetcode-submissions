class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string>st;
        int finalans=0;
        for(int i=0;i < tokens.size(); i++)
        {
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
            {
                int ans = stoi(st.top());
                st.pop();
                int ans1 = stoi(st.top());
                st.pop();
                if(tokens[i]== "+")
                {
                finalans = ans +  ans1;
                }
                else if(tokens[i]== "-")
                {
                finalans = ans1 - ans;
                }
                else if(tokens[i]== "*")
                {
                finalans = ans * ans1;
                }
                else if(tokens[i]== "/")
                {
                finalans = ans1 / ans;
                }
                st.push(to_string(finalans));
            }
            else
            {
                st.push(tokens[i]);
            }
        }
        return stoi(st.top());
    }
};
