class Solution {
private:
    int Xindex;
    int Yindex;
    int ret;
public:
    int countNegatives(vector<vector<int>>& grid) {
        Yindex = grid.size();
        ret = 0;
        while (--Yindex >= 0) {
            Xindex = grid[Yindex].size();
            while (--Xindex >= 0) {
                if (grid[Yindex][Xindex] < 0)
                    ret++;
                else
                    break ;
            }
        }
        return (ret);
    }
};
