class FirstUnique {
public:
    queue<int> q;
    unordered_map<int, int> m;
    FirstUnique(vector<int>& nums) {
        for(auto i: nums){
            add(i);
        }
    }
    
    int showFirstUnique() {
        while(!q.empty() && m[q.front()] >=2){
            q.pop();
        }
        return (q.empty())? -1 : q.front();
    }
    
    void add(int value) {
        q.push(value);
        m[value]++;
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */
