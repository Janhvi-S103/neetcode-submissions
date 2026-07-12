class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>grp;
        unordered_map<string,vector<string>> comp;
        for(int i=0;i <strs.size(); i++)
        {
            string temp= strs[i];
            sort(temp.begin(), temp.end());
            if(comp.find(temp) == comp.end())
            {
                comp[temp] = vector<string>();
            }
            comp[temp].push_back(strs[i]);

        }
        for(auto p: comp)
        {
            grp.push_back(p.second);
        }
        return grp;
    }
};
