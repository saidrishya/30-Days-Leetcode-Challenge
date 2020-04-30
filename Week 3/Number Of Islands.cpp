class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
         // so bfs, when we see a 1, we increment the counter and find all connecting 1s 
        //and turn it to 0, to kinda find the structure of the island
        
        int count=0;
        
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                if(grid[i][j] == '1'){
                    count++;
                    callBFS(grid,i,j);
                }
            }
        }
        return count;
    }
    
    void callBFS(vector<vector<char>> &grid, int i, int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[i].size() || grid[i][j]=='0')
             return;
        grid[i][j] = '0';
        callBFS(grid,i+1,j);
        callBFS(grid,i-1,j);
        callBFS(grid,i,j+1);
        callBFS(grid,i,j-1);
    }
};
