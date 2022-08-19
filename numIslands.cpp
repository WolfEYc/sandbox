#include <vector>
#include <iostream>
using namespace std;


class Solution
{
private:
    vector<pair<int, int>> directions;
    vector<vector<bool>> grid;

    bool isIsland(int r, int c) const
    {
        return (
            r >= 0 && c >= 0 
            && r < grid.size() && c < grid[r].size()
            && grid[r][c]
        );
    }

    void dfs(int r, int c)
    {
        if(!isIsland(r, c)) return;

        grid[r][c] = 0;
        
        for(int i = 0; i < directions.size(); i++)
        {
            dfs(r + directions[i].first, c + directions[i].second);
        }
    }
public:
    Solution() : 
        directions({
            {0, 1},
            {0, -1},
            {1, 0},
            {-1, 0}
        }) {}
        
    int numIslands(vector<vector<bool>>& map){
        grid = map;

        int counter = 0;
        int r, c;
        for(r = 0; r < grid.size(); r++)
        {
            for(c = 0; c < grid[r].size(); c++)
            {
                if(!isIsland(r, c)) continue;
                dfs(r, c);
                counter++;
            }
        }

        return counter;
    }
};

int main(){

    vector<vector<bool>> map = {
        {0, 1, 0},
        {1, 1, 0},
        {0, 0, 1},
        {0, 0, 1}
    };
    
    Solution s;
    
    cout << s.numIslands(map) << endl;

    return EXIT_SUCCESS;
}

//0 is water, 1 is land, return the number of islands