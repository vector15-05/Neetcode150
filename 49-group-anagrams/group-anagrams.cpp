class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>v = strs;
        unordered_map<string,vector<string>>m = {};

        for(int i=0;i<v.size();i++){
            sort(v[i].begin(),v[i].end());
            m[v[i]].push_back(strs[i]);
        }

        vector<vector<string>>res = {};

        for(auto it: m){
            res.push_back(it.second);
        }

        return res;

    }
};