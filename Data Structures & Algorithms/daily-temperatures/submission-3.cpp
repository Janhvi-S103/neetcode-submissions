class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>temp;
        vector<int>result(temperatures.size(),0);
        for(int i=0; i < temperatures.size(); i++)
        {
            while(!temp.empty() && temperatures[i] > temperatures[temp.top()])
            {
                int prev=temp.top();
                temp.pop();
                result[prev]=i-prev;
            }
            temp.push(i);
        }
        return result;
    }
};
