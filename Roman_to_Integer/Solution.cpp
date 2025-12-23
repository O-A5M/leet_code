class Solution {
private:
    int	ret;
    int	counter;
    char	holder = s;
    map<char, int>  Roman_value = {
        {'I', 1},
	{'V', 5},
	{'X', 10},
	{'L', 50},
	{'C', 100},
	{'D', 500},
	{'M', 1000}
    }
public:
    int romanToInt(string s) {
	    for (int i = 0; s[i]; i++) {
		    if (holder == s[i]) {
			counter++;
			continue;
		    }
		    else {
			ret += (Roman_value[holder] * counter);
			holder = s[i];
		    }
	    }
	    return (ret);
    }
};
