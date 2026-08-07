class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string>fold;
        for(int i=0; i < logs.size(); i++ )
        {
            //if(!fold.empty())
            {
                if(logs[i]=="./")
                {
                    continue;
                }
                else if(logs[i] == "../")
                {
                    if(!fold.empty())
                        fold.pop();
                }
                else
                    fold.push(logs[i]);
            }
        }
        return fold.size();
    }
};