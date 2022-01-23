class Solution {
public:
    map<int, bool> m;
    
    void init(int r, int c){
        for(int i=0; i<r; i++)
            for(int j=0; j<c; j++) 
                m[i*100+j] = false;
    }
    
    int checkArea(vector<vector<int>>& grid, int r, int c){
        if(!grid[r][c] || m[r*100+c]) return 0;
        m[r*100+c] = true;
        int area = 1;
        if(r>=1 && grid[r-1][c]) area += checkArea(grid, r-1, c);
        if(c>=1 && grid[r][c-1]) area += checkArea(grid, r, c-1);
        if(r+1<grid.size() && grid[r+1][c]) area += checkArea(grid, r+1, c);
        if(c+1<grid[0].size() && grid[r][c+1]) area += checkArea(grid, r, c+1);
        return area;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        init(grid.size(), grid[0].size());
        int ans = 0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j] == 1 && !m[i*100+j])
                    ans = max(ans, checkArea(grid, i, j));
            }
        }
        return ans;
    }
};