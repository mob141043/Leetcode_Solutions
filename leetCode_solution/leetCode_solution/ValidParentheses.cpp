#include <iostream>
#include<stack>
#include<map>
using namespace std;

bool isValid(string s) {
	stack<char> myStack;
	int size = s.size();
	map<char, char> myMap;
	char top;
	myMap[']'] = '[';
	myMap['}'] = '{';
	myMap[')'] = '(';
	for (int i = 0; i < size; i++) {
		if (myMap.count(s[i])) {
			top = myStack.empty()?'*':myStack.top();
			myStack.pop();
			if (myMap[s[i]] != top) {
				return false;
			}
		}
		else {
			myStack.push(s[i]);
		}
	}
	return myStack.empty();
}

int main()
{

}

