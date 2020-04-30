class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> m;
        int x,y;
        for(auto i: stones) m.push(i);
        while(!m.empty()){
            y=m.top(),x=0;
            m.pop();
            if(!m.empty()) {
                x=m.top();
                m.pop();
            }
            if(x!=0){
                if(x==y) {
                    y=0; continue;
                }
                else if(x<=y){
                    m.push(y-x);
                }
            }
        }
      return y;
        
    }
};
