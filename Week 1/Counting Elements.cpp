class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_map<int, int> m;
        unordered_map<int, int> :: iterator it;
        for(auto i: arr) m[i]++;
        int c=0;
        for(it = m.begin(); it!=m.end(); it++ ){
            if(m.find(it->first + 1) != m.end()){
                c +=  m[it->first] ;
            }
        }
        return c;
    }
};
