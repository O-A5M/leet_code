#include <string>
#include <deque>

using namespace	std;

class Solution {
public:
    bool isValid(string s) {
        int     index = -1;
        deque<char>     dq;
        size_t          size = s.size();

        while (++index < size) {
                if (s[index] == '('
                                || s[index] == '['
                                || s[index] == '{') {
                    dq.push_back(s[index]);
                    continue;
                }
                if (!dq.empty() &&
                                ((s[index] == ')' && dq.back() == '(')
                                || (s[index] == '}' && dq.back() == '{')
                                || (s[index] == ']' && dq.back() == '['))) {
                                dq.pop_back();
                                continue;
                }
                return (false);
        }
        if (!dq.empty())
            return (false);
        return (true);
    }
};
