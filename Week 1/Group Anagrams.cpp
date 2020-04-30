class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         vector<vector<string> > res;
        unordered_map<string, vector<string>> m;
        if(strs.size()==0) return res;
         for(int i=0; i<strs.size(); i++){
             string temp=strs[i];
             sort(temp.begin(), temp.end());
             if(m.find(temp) != m.end()){
                m[temp].push_back(strs[i]);
             }
            else{
                 m[temp] = vector<string>{strs[i]};
            }
         }
        for(auto i: m){
           res.push_back(i.second);
        }
        
return res;
    }
};
