#include <iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
	string prefix = strs[0];
	int sizeOfstrs = strs.size();
	for (int i = 1; i < sizeOfstrs; i++) {
		while(strs[i].find(prefix) != 0) {
			prefix = prefix.substr(0, prefix.size() - 1);
			if (prefix.empty()) {
				return "";
			}
		}
	}
	return prefix;
}

int main()
{
	longestCommonPrefix();
}

