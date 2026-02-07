#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int                 ret = 0;
        vector<int>::iterator    it = nums.begin();
        while (it != nums.end()) {
            ret ^= *it;
            it++;
        }
        return (ret);
    }
};
