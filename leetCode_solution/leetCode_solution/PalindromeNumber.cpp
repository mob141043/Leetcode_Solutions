#include <iostream>
#include<string>
using namespace std;

bool isPalindrome(int x) {
	if (x < 0) {
		return false;
	}
	string s = to_string(x);
	int size = s.size();
	if (size & 1) {
		return false;
	}
	for (int i = 0, j = size - 1; j >= i; i++, j--) {
		if (s.at(i) != s.at(j)) {
			return false;
		}
	}
	return true;
}

int main()
{
	
}

