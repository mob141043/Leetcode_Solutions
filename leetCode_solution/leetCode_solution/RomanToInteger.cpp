#include <iostream>
#include<map>
using namespace std;

int romanToInt(string s) {
	map<char, int> map;
	map['I'] = 1;
	map['V'] = 5;
	map['X'] = 10;
	map['L'] = 50;
	map['C'] = 100;
	map['D'] = 500;
	map['M'] = 1000;
	int size = s.size();
	int result = 0;
	for (int i = 0; i < size; i++) {
		if (i == size - 1) {
			result += map[s[i]];
			break;
		}
		if (map[s[i]] >= map[s[i + 1]]) {
			result += map[s[i]];
		}
		else {
			result -= map[s[i]];
		}
	}
	return result;
}

int main()
{
	cout << romanToInt("IV");
}

