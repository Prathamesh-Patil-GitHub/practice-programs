// https://leetcode.com/problems/roman-to-integer

class Solution {
public:
    int romanToInt(string s) {
	    int num[256] = { 0 };
	    int result = 0;
	    num['I'] = 1; num['V'] = 5; num['X'] = 10; num['L']=50;
	    num['C'] = 100; num['D'] = 500; num['M'] = 1000;
	    int i = 0;
	    while (i < s.size()){
		    if (num[s[i]] < num[s[i+1]])
			    result -= num[s[i]];
		    else
			    result += num[s[i]];
		    i++;
	    }
	    return result;
    }
};