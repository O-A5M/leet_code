#include <vector>
#include <functional>
#include <algorithm>

using namespace	std;

class Solution {
private:
	int	appleTotal = 0;
	int	capacityTotal = 0;
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
		sort(capacity.begin(), capacity.end(), greater<int>());
		for (int i = 0; i < apple.size(); i++)
			appleTotal += apple[i];
		for (int i = 0; i < capacity.size(); i++) {
			capacityTotal += capacity[i];
			if (capacityTotal >= appleTotal)
				return (i);
		}
		return (0);
    }
};
